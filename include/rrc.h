/*
 * Copyright 2020 AT&T Intellectual Property
 */

//
// Created by adi ENZEL on 1/12/20.
//

#ifndef RRC_RRC_H
#define RRC_RRC_H

#include <string.h>
#include <error.h>
#include <errno.h>
#include <time.h>
#include <cstdio>


#include "../3rdparty/genFiles/asn_application.h"
#include "../3rdparty/genFiles/asn_system.h"
#include "../3rdparty/genFiles/constr_TYPE.h"

#include "../3rdparty/genFiles/BCCH-BCH-Message.h"
#include "../3rdparty/genFiles/BCCH-BCH-Message-MBMS.h"
#include "../3rdparty/genFiles/BCCH-DL-SCH-Message.h"
#include "../3rdparty/genFiles/BCCH-DL-SCH-Message-BR.h"
#include "../3rdparty/genFiles/BCCH-DL-SCH-Message-MBMS.h"
#include "../3rdparty/genFiles/MCCH-Message.h"
#include "../3rdparty/genFiles/PCCH-Message.h"
#include "../3rdparty/genFiles/DL-CCCH-Message.h"
#include "../3rdparty/genFiles/DL-DCCH-Message.h"
#include "../3rdparty/genFiles/UL-CCCH-Message.h"
#include "../3rdparty/genFiles/UL-DCCH-Message.h"
#include "../3rdparty/genFiles/SBCCH-SL-BCH-Message.h"
#include "../3rdparty/genFiles/SBCCH-SL-BCH-Message-V2X-r14.h"
#include "../3rdparty/genFiles/SC-MCCH-Message-r13.h"
#include "../3rdparty/genFiles/BCCH-BCH-Message-NB.h"
#include "../3rdparty/genFiles/BCCH-BCH-Message-TDD-NB.h"
#include "../3rdparty/genFiles/PCCH-Message-NB.h"
#include "../3rdparty/genFiles/DL-CCCH-Message-NB.h"
#include "../3rdparty/genFiles/DL-DCCH-Message-NB.h"
#include "../3rdparty/genFiles/UL-CCCH-Message-NB.h"
#include "../3rdparty/genFiles/SC-MCCH-Message-NB.h"
#include "../3rdparty/genFiles/UL-DCCH-Message-NB.h"


#include "../3rdparty/xml2json/include/xml2json.hpp"


#define BUFFER_SIZE 65536
int codding = ATS_ALIGNED_BASIC_PER;

#ifdef __cplusplus
extern "C"
{
#endif

size_t encodeBuffer(int codingType,
        asn_TYPE_descriptor_t *typeDescriptor,
        const void *objectData,
        uint8_t *buffer,
        size_t buffer_size);

int decodeBuffer(int codingType,
        asn_TYPE_descriptor_t *typeDescriptor,
        void *objectData,
        uint8_t *rcvBuffer,
        int rcvBufferSize);

char *getJsonFromASN(int codingType, asn_TYPE_descriptor_t *typeDescriptor, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getBCCH_BCH_MESSAGE(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getBCCH_BCH_MESSAGE_MBMS(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getBCCH_DL_SCH_MESSAGE(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getBCCH_DL_SCH_MESSAGE_BR(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getBCCH_DL_SCH_MESSAGE_MBMS(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getMCCH_MESSAGE(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getPCCH_MESSAGE(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getDL_CCCH_MESSAGE(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getDL_DCCH_MESSAGE(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getUL_CCCH_MESSAGE(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getUL_DCCH_MESSAGE(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getSC_MCCH_MESSAGE_R13(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getSBCCH_SL_BCH_MESSAGE(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getSBCCH_SL_BCH_MESSAGE_V2X_R14(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getBCCH_BCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getBCCH_BCH_MESSAGE_TDD_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getBCCH_DL_SCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getPCCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getDL_CCCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getDL_DCCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getUL_CCCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getSC_MCCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getUL_DCCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

#ifdef __cplusplus
}
#endif


#endif //RRC_RRC_H
