//
// Created by dell on 2020/3/30.
//
#include "show_bytes.h"
#include <stdio.h>
#include <string.h>

void main() {
//    int ival = 12345;
//    float fval = (float)ival;
//    int *pval = &ival;
//    show_int(ival);
//    show_float(fval);
//    show_pointer(pval);
//    show_long(10000000);
    //����2.5
    /*
    int val = 0x87654321;
    byte_pointer valp = (byte_pointer) & val;
    show_bytes(valp, 1);
    show_bytes(valp, 2);
    show_bytes(valp, 3);
     */
    //����2.7
    const char *s = "abcdef";
    show_bytes((byte_pointer) s, strlen(s));

}