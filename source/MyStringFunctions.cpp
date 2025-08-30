#include "MyStringFunctions.h"

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

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

char* MyStrCat(char *destination, const char *source) {
    size_t len = MyStrLen(destination);
    return MyStrCpy(destination + len, source) - len;
}

int MyStrCmp(const char *str1, const char *str2) {
    while (*str1 == *str2 && *str1 != '\0') {
        str1++;
        str2++;
    }
    
    int signed_ans = *str1 - *str2;
    int sign = signed_ans == 0 ? 0 : signed_ans / abs(signed_ans);
    
    return sign;
}

char* MyStrDup(const char *str) {
    char* start_ptr = (char*)malloc(sizeof(*str) * (MyStrLen(str) + 1));

    if (start_ptr != NULL) {
        MyStrCpy(start_ptr, str);
    }

    return start_ptr;
}