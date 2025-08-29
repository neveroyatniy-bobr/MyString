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

char* MyStrCpy(char* destination, const char* source) {
    char* destination_copy = destination;

    while (*source != '\0') {
        *destination = *source;

        destination++;
        source++;
    }

    *destination = *source;
    
    return destination_copy;
}

char* MyStrNCpy(char* destination, const char* source, size_t n) {
    char* destination_copy = destination;
    size_t cnt = 0;

    while (*source != '\0' && cnt < n) {
        *destination = *source;

        destination++;
        source++;
        cnt++;
    }
    
    return destination_copy;
}