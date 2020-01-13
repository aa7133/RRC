cmake_minimum_required(VERSION 3.15)
project(rrc)

set(CMAKE_CXX_STANDARD 17)


set(CMAKE_VERBOSE_MAKEFILE off)
include_directories(3rdparty)

file(GLOB ASN_MODULE_SRCS "3rdparty/genFiles/*.c")
file(GLOB ASN_MODULE_HDRS "3rdparty/genFiles/*.h")
file(GLOB RRC_PARSER_HDRS "include/*.h")
file(GLOB RRC_PARSER_SRCS "src/*.cpp")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DASN_DISABLE_OER_SUPPORT -DASN_PDU_COLLECTION -L. -O3 -L/usr/lib -Wall -Wpedantic")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DASN_DISABLE_OER_SUPPORT -DASN_PDU_COLLECTION -L. -O3 -L/usr/lib -Wall -W -Wpedantic")


add_library(rrc ${RRC_PARSER_SRCS} ${RRC_PARSER_HDRS} ${ASN_MODULE_SRCS} ${ASN_MODULE_HDRS})

link_libraries(rt rrc  pthread)

add_executable(asntest
        TEST/testASN.cpp)

#add_custom_command(TARGET rrc
#        POST_BUILD
#        COMMAND ranlib librrc.a
#        )
#
#add_custom_command(TARGET rrc
#        POST_BUILD
#        COMMAND objcopy -g librrc.a
#        )


install(TARGETS rrc DESTINATION /usr/local/lib)
install(FILES ${RRC_PARSER_HDRS} DESTINATION /usr/local/include/rrc)
install(FILES ${ASN_MODULE_HDRS} DESTINATION /usr/local/include/rrc/asnFiles/)

