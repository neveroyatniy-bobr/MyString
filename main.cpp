#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "MyStringFunctions.h"

int main() {
    char* str = NULL;

    size_t n = 0;

    MyGetLine(&str, &n, stdin);

    MyPutS(str);

    free(str);

    char str_to_copy[100];
    memset(str_to_copy, '1', 100);

    char str_copy_from[] = "lolol";

    MyStrCpy(str_to_copy, str_copy_from);

    return 0;
}