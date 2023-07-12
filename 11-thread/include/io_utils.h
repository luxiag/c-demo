//
// Created by mac on 2023/7/5.
//
#pragma once
#include<stdio.h>
#include<stdarg.h>

void PrintBinary(unsigned int value);

#define PRINT_METADATA
#ifdef PRINT_METADATA
#define PRINTLNF(format,...) printf("("__FILE__":%d) %s: "format"\n",__LINE__,__FUNCTION__,##__VA_ARGS__)
#else
#define PRINTLNF(format,...)printf(format"\n",##__VA_ARGS__)
#endif

#define PRINT_CHAR(char_value) PRINTLNF(#char_value": %c",char_value)
#define PRINT_WCHAR(char_value)PRINTLNF(#char_value": %lc",char_value)
#define PRINT_INT(int_value)PRINTLNF(#int_value": %d",int_value)
#define PRINT_LONG(long_value)PRINTLNF(#long_value"%ld",long_value)
#define PRINT_LLONG(long_value)PRINTLNF(#long_value"%lld",long_value)
#define PRINT_BINARY(int_value)PrintBinary((unsigned int) int_value);
#define PRINT_HEX(int_value)PRINTLNF(#int_value": %#x",int_value)
#define PRINT_BOOL(bool_value)PRINTLNF(#bool_value": %s",bool_value?"true":"false")
#define PRINT_DOUBLE(double_value)PRINTLNF(#double_value": %g",double_value)
#define PRINT_STRING(string_value)PIRNTLNF(#string_value": %s",string_value)

#define PRINT_ARRAY(format,array,length)\
{\
    for(int array_index = 0;array_index<length;++array_index)\
    {\
        printf(format,array[array_index]);\
    }\
    printf("\n");\
}

#define PRINT_INT_ARRAY_LN(array,length)\
{\
    for(int i = 0;i<length;++i)\
    {\
        PRINTLNF(#array[i]"[%d]: %d",i,array[i]);\
    }\
}

#define PRINT_INT_ARRAY(array,length)PRINT_ARRAY("%d",array,length)
#define PRINT_CHAR_ARRAY(array,length)PRINT_ARRAY("%c",array,length)
#define PRINT_DOUBLE_ARRAY(array,length)PRINT_ARRAY("%g",array,length)
