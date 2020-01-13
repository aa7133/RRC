/*
 * Copyright 2020 AT&T Intellectual Property
 */

//
// Created by adi ENZEL on 1/12/20.
//
#include "../include/rrc.h"

#ifdef __cplusplus
extern "C"
{
#endif

/**
 *
 * @param codingType
 * @param typeDescriptor
 * @param objectData
 * @param buffer
 * @param buffer_size
 * @return
 */
size_t encodeBuffer(int codingType,
        asn_TYPE_descriptor_t *typeDescriptor,
        const void *objectData,
        uint8_t *buffer,
        size_t buffer_size) {
    asn_enc_rval_t er = asn_encode_to_buffer(nullptr, static_cast<asn_transfer_syntax>(codingType), typeDescriptor, objectData, buffer, buffer_size);
    if (er.encoded == -1) {
        fprintf(stderr, "Error encoding to buffer %s, %s\n", typeDescriptor->name, strerror(errno));
        return -1;
    } else if (er.encoded > (ssize_t)buffer_size) {
        fprintf(stderr, "Buffer of size %d is to small for %s needs %ld",
                (int)buffer_size,
                typeDescriptor->name,
                er.encoded);
        return -2;
    }

    return er.encoded;
}

/**
 *
 * @param codingType
 * @param typeDescriptor
 * @param objectData
 * @param rcvBuffer
 * @param rcvBufferSize
 * @return
 */
int decodeBuffer(int codingType,
                 asn_TYPE_descriptor_t *typeDescriptor,
                 void *objectData,
                 uint8_t *rcvBuffer,
                 int rcvBufferSize) {
    objectData = nullptr;
    asn_dec_rval_t rval;

    rval = asn_decode(nullptr,
                      static_cast<asn_transfer_syntax>(codingType),
                      typeDescriptor,
                      (void **) &objectData,
                      rcvBuffer,
                      rcvBufferSize);

    if (rval.code != RC_OK) {
        fprintf(stderr, "Error %d Decoding data\n", rval.code);
        ASN_STRUCT_FREE(*typeDescriptor, objectData);
        return -1;
    }


//#ifdef DEBUG_PARSER
    char *printBuffer;
    size_t size;

    FILE *stream = open_memstream(&printBuffer, &size);
    asn_fprint(stream, typeDescriptor, objectData);
    fprintf(stdout, "Encoding past : %s", printBuffer);

//#endif

    return 0;
}

/**
 *
 * @param xmlBuffer
 * @param xmlBufferSize
 * @param jsonBuffer
 * @param jsonBufferSize
 * @return length of json buffer or -1 if buffer to small to contain the json data
 */


char *getJsonFromASN(int codingType,
                     asn_TYPE_descriptor_t *typeDescriptor,
                     uint8_t *rcvBuffer,
                     int &rcvBufferSize) {

    void *pdu = nullptr;
    if (decodeBuffer(codingType, typeDescriptor, pdu, rcvBuffer, rcvBufferSize) != 0) {
        return nullptr;
    }


    uint8_t buffer[BUFFER_SIZE];
    auto bufferSize = BUFFER_SIZE;
    auto size = encodeBuffer(ATS_BASIC_XER, typeDescriptor, pdu, buffer, bufferSize);
    if (size < 0) {
        return nullptr;
    }
    auto json_str = xml2json((const char *)buffer);
    auto retBuff = (char *)malloc(json_str.length() + 1);
    memcpy(retBuff, json_str.c_str(), json_str.length());
    rcvBufferSize = json_str.length();
    retBuff[rcvBufferSize] = 0;
    return retBuff;

}


char *getBCCH_BCH_MESSAGE(int codingType,
                          uint8_t *rcvBuffer,
                          int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_BCCH_BCH_Message, rcvBuffer,rcvBufferSize);
}

char *getBCCH_BCH_MESSAGE_MBMS(int codingType,
                               uint8_t *rcvBuffer,
                               int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_BCCH_BCH_Message_MBMS, rcvBuffer,rcvBufferSize);
}

char *getBCCH_DL_SCH_MESSAGE(int codingType,
                             uint8_t *rcvBuffer,
                             int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_BCCH_DL_SCH_Message, rcvBuffer,rcvBufferSize);
}

char *getBCCH_DL_SCH_MESSAGE_BR(int codingType,
                                uint8_t *rcvBuffer,
                                int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_BCCH_DL_SCH_Message_BR, rcvBuffer,rcvBufferSize);
}

char *getBCCH_DL_SCH_MESSAGE_MBMS(int codingType,
                                uint8_t *rcvBuffer,
                                int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_BCCH_DL_SCH_Message_MBMS, rcvBuffer,rcvBufferSize);
}

char *getMCCH_MESSAGE(int codingType,
                      uint8_t *rcvBuffer,
                      int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_MCCH_Message, rcvBuffer,rcvBufferSize);
}

char *getPCCH_MESSAGE(int codingType,
                      uint8_t *rcvBuffer,
                      int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_PCCH_Message, rcvBuffer,rcvBufferSize);
}

char *getDL_CCCH_MESSAGE(int codingType,
                         uint8_t *rcvBuffer,
                         int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_DL_CCCH_Message, rcvBuffer,rcvBufferSize);
}

char *getDL_DCCH_MESSAGE(int codingType,
                         uint8_t *rcvBuffer,
                         int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_DL_DCCH_Message, rcvBuffer,rcvBufferSize);
}

char *getUL_CCCH_MESSAGE(int codingType,
                         uint8_t *rcvBuffer,
                         int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_UL_CCCH_Message, rcvBuffer,rcvBufferSize);
}

char *getUL_DCCH_MESSAGE(int codingType,
                         uint8_t *rcvBuffer,
                         int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_UL_DCCH_Message, rcvBuffer,rcvBufferSize);
}

char *getSC_MCCH_MESSAGE_R13(int codingType,
                         uint8_t *rcvBuffer,
                         int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_SC_MCCH_Message_r13, rcvBuffer,rcvBufferSize);
}



char *getSBCCH_SL_BCH_MESSAGE(int codingType,
                              uint8_t *rcvBuffer,
                              int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_SBCCH_SL_BCH_Message, rcvBuffer,rcvBufferSize);
}

char *getSBCCH_SL_BCH_MESSAGE_V2X_R14(int codingType,
                                      uint8_t *rcvBuffer,
                                      int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_SBCCH_SL_BCH_Message_V2X_r14, rcvBuffer,rcvBufferSize);
}



char *getBCCH_BCH_MESSAGE_NB(int codingType,
          uint8_t *rcvBuffer,
          int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_BCCH_BCH_Message_NB, rcvBuffer,rcvBufferSize);
}

char *getBCCH_BCH_MESSAGE_TDD_NB(int codingType,
          uint8_t *rcvBuffer,
          int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_BCCH_BCH_Message_TDD_NB, rcvBuffer,rcvBufferSize);
}

char *getBCCH_DL_SCH_MESSAGE_NB(int codingType,
          uint8_t *rcvBuffer,
          int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_BCCH_BCH_Message_NB, rcvBuffer,rcvBufferSize);
}

char *getPCCH_MESSAGE_NB(int codingType,
          uint8_t *rcvBuffer,
          int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_PCCH_Message_NB, rcvBuffer,rcvBufferSize);
}

char *getDL_CCCH_MESSAGE_NB(int codingType,
                            uint8_t *rcvBuffer,
                            int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_DL_CCCH_Message_NB, rcvBuffer,rcvBufferSize);
}

char *getDL_DCCH_MESSAGE_NB(int codingType,
                            uint8_t *rcvBuffer,
                            int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_DL_DCCH_Message_NB, rcvBuffer,rcvBufferSize);
}

char *getUL_CCCH_MESSAGE_NB(int codingType,
          uint8_t *rcvBuffer,
          int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_UL_CCCH_Message_NB, rcvBuffer,rcvBufferSize);
}

char *getSC_MCCH_MESSAGE_NB(int codingType,
          uint8_t *rcvBuffer,
          int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_SC_MCCH_Message_NB, rcvBuffer,rcvBufferSize);
}

char *getUL_DCCH_MESSAGE_NB(int codingType,
          uint8_t *rcvBuffer,
          int &rcvBufferSize) {
    //ATS_ALIGNED_BASIC_PER
    return getJsonFromASN(codingType, &asn_DEF_UL_DCCH_Message_NB, rcvBuffer,rcvBufferSize);
}


#ifdef __cplusplus
}
#endif

