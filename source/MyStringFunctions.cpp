#include "MyStringFunctions.h"

#include <stdio.h>

const char* MyStrChr(const char* str, int ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return str;
        }
        str++;
    }

    return (ch == 0) ? str : NULL;
}

size_t MyStrLen(const char* str) {
    size_t len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }

    return len;
}