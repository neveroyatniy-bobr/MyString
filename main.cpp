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

    return 0;
}