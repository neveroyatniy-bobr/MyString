#include "MyStringFunctions.h"

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>

int MyClamp(int n, int n_min, int n_max) {
    if (n < n_min) {
        return n_min;
    }
    else if (n > n_max) {
        return n_max;
    }
    else {
        return n;
    }
}

int MyPow(int x, int n) {
    assert(n >= 0);

    if (n == 0) { return 1; }
    else if (n == 1) { return x; }
    else {
        int half = MyPow(x, n / 2);
        return n % 2 == 0 
             ? half * half
             : half * half * x;
    }
}

bool MyIsDigit(const char symbol) {
    return '0' <= symbol && symbol <= '9';
}

bool MyIsSign(const char symbol) {
    return symbol == '+' || symbol == '-';
}

char* MyStrChr(const char* str, int ch) {
    assert(str != NULL);

    while (*str != '\0') {
        if (*str == ch) {
            return (char*)str;
        }

        str++;
    }

    return (ch == '\0') ? (char*)str : NULL;
}

const char* MyStrRChr(const char* str, int ch) {
    assert(str != NULL);

    const char* last_mention = 0;
    while (*str != '\0')
    {
        last_mention = *str == ch 
                     ? str 
                     : last_mention;
        
        str++;
    }

    return last_mention; 
}

size_t MyStrLen(const char* str) {
    assert(str != NULL);

    size_t len = 0;

    while (*str != '\0') {
        len++;
        str++;
    }

    return len;
}

int MyAToI(const char *nptr) {
    assert(nptr != NULL);

    int n = 0;
    size_t len = MyStrLen(nptr);
    
    bool is_signed = (MyIsSign(nptr[0]));
    bool is_ok = true;
    for (size_t i = (size_t)is_signed; i < len; i++) {
        is_ok = (MyIsDigit(nptr[i]))
              ? is_ok
              : false;
    }

    if (is_ok) {
        for (size_t i = (size_t)is_signed; i < len; i++) {
            n *= 10;
            n += (nptr[i] - '0');
        }
    }
    else {
        n = 0;
    }
    
    return is_signed
                ? n * (nptr[0] == '+' ? 1 : -1)
                : n;
}

char* MyStrCpy(char* destination, const char* source) {
    assert(destination != NULL);
    assert(source != NULL);

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
    assert(destination != NULL);
    assert(source != NULL);

    char* destination_copy = destination;
    size_t cnt = 0;

    while (*source != '\0' && cnt < n) {
        *destination = *source;

        destination++;
        source++;
        cnt++;
    }

    if (cnt < n) {
        for (size_t i = 0; i < n - cnt; i++) {
            *destination = '\0';
        }
    }
    
    return destination_copy;
}

char* MyStrCat(char *destination, const char *source) {
    assert(destination != NULL);
    assert(source != NULL);

    size_t len = MyStrLen(destination);

    return MyStrCpy(destination + len, source) - len;
}

char* MyStrNCat(char *destination, const char *source, size_t n) {
    assert(destination != NULL);
    assert(source != NULL);

    size_t dst_len = MyStrLen(destination);
    size_t src_len = MyStrLen(source);

    char* ret = MyStrNCpy(destination + dst_len, source, n) - dst_len;

    if (src_len >= n) {
        *(ret + dst_len + n - 1) = 0;
    }

    return ret; 
}

int MyStrCmp(const char *str1, const char *str2) {
    assert(str1 != NULL);
    assert(str2 != NULL);

    while (*str1 == *str2 && *str1 != '\0') {
        str1++;
        str2++;
    }
    
    int signed_ans = *str1 - *str2;
    int sign = (signed_ans == 0) 
                    ? 0 
                    : signed_ans / abs(signed_ans);
    
    return sign;
}

char* MyStrDup(const char *str) {
    assert(str != NULL);

    char* start_ptr = (char*)calloc((MyStrLen(str) + sizeof('\0')), sizeof(*str));

    if (start_ptr != NULL) {
        MyStrCpy(start_ptr, str);
    }

    return start_ptr;
}

int MyFPutS(const char *str, FILE *stream) {
    assert(str != NULL);
    assert(stream != NULL);

    size_t len = MyStrLen(str);

    size_t bytes_written = 0;
    bool is_EOF = false;

    for (size_t i = 0; i < len; i++) {
        is_EOF = fputc(str[i], stream) == EOF ? true : is_EOF;

        bytes_written++;
    }

    if (bytes_written == len) {
        fputc('\n', stream);
        bytes_written++;
    }

    return is_EOF ? EOF : (int)bytes_written;
}

int MyPutS(const char *str) {
    assert(str != NULL);

    return MyFPutS(str, stdout);
}

char* MyFGetS(char *str, int n, FILE *stream) {
    assert(str != NULL);
    assert(stream != NULL);

    int cnt = 0;

    int current_ch = fgetc(stream);

    while (current_ch != EOF && current_ch != '\n' && cnt <= n)
    {
        *str = (char)current_ch;
        cnt++;

        current_ch = fgetc(stream);

        str++;
    }
    
    return cnt == 0 ? NULL : str;
}

size_t MyGetLine(char** lineptr, size_t* n, FILE* stream) {
    assert(lineptr != NULL);
    assert(stream != NULL);

    if (*lineptr == NULL) {
        *n = 1;
        *lineptr = (char*)calloc(*n, sizeof(char));
    }

    size_t cnt = 0;

    int current_ch = fgetc(stream);

    while (current_ch != EOF && current_ch != '\n')
    {
        if (cnt == *n) {
            *n *= 2;
            *lineptr = (char*)realloc(*lineptr, *n); 
        }

        *(*lineptr + cnt) = (char)current_ch;
        cnt++;

        current_ch = fgetc(stream);
    }

    (*lineptr)[cnt] = '\0';
    cnt++;

    return cnt;
}

char* MyStrStr(const char* haystack, const char* needle) {
    assert(haystack != NULL);
    assert(needle != NULL);

    const int char_number = 256;
    int last_mention[char_number] = {};
    for (int i = 0; i < char_number; i++) {
        last_mention[i] = -1;
    }

    const char* start_needle = needle;
    const char* start_haystack = haystack;
    size_t needle_len = 0;
    size_t haystack_len = MyStrLen(haystack);

    while (*needle != '\0') {
        last_mention[(int)*needle] = (int)needle_len;
        needle++;
        needle_len++;
    }

    const char* needle_end = start_needle + (needle_len - 1);

    needle = needle_end;
    haystack += (needle_len - 1);
    while (*haystack != '\0' && needle != start_needle) {
        if (*needle == *haystack) {
            needle--;
            haystack--;
        }
        else {
            haystack += (needle_end - needle);
            needle = needle_end;

            int step = (int)needle_len - 1 - last_mention[(int)*haystack];
            haystack += MyClamp(step, 1, (int)haystack_len - 1 - (int)(haystack - start_haystack));
        }
    }
    
    if (*haystack == '\0') {
        return NULL;
    } 
    else {
        return *haystack == *needle ? (char*)haystack : NULL;
    }
}
