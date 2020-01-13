RRC parser from ASN to JSON
========

## C++ library converts ASN encoded to JSON

### Usage

   ```


#### Build and Run a Command Line Tool
for android please use: 
http://nickdesaulniers.github.io/blog/2016/07/01/android-cli/

OR

https://dev.to/bauripalash/how-to-run-c-programs-on-android-3cco

```bash
mkdir 3rdparty
cd 3rdparty
git clone https://github.com/Cheedoong/xml2json.git
cd ..
mkdir build
cd build
cmake ..
make
```
### ASN1C regeneration
```bash
regenerate-from-asn1-source:
    cd 3rdparty/genFiles
	asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D. ../asnFiles/36331-f60-ASNfunctions.asn
```
	

#### C++ API
```C++

use ATS_ALIGNED_BASIC_PER as coding type as default one 
   the below paramter looks like the other options:

    ATS_UNALIGNED_BASIC_PER
    ATS_UNALIGNED_CANONICAL_PER
    ATS_ALIGNED_BASIC_PER
    ATS_ALIGNED_CANONICAL_PER


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

char *getSBCCH_S```
L_BCH_MESSAGE_V2X_R14(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getBCCH_BCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getBCCH_BCH_MESSAGE_TDD_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getBCCH_DL_SCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getPCCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getDL_CCCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getDL_DCCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getUL_CCCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getSC_MCCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);

char *getUL_DCCH_MESSAGE_NB(int codingType, uint8_t *rcvBuffer, int &rcvBufferSize);


 
```

### return values
 
### XML to JSON library 
by Cheedoong Ch'ng

https://github.com/Cheedoong/xml2json

https://github.com/Cheedoong/xml2json/blob/master/LICENSE


### ASN COMPILER
based on

https://github.com/vlm/asn1c

https://github.com/vlm/asn1c/blob/master/LICENSE

OR

from linux foundation (new version)

git clone "https://errit.o-ran-sc.org/r/a/com/asn1c"

this require user in the linux foundation


 


