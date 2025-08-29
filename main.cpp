#include <string.h>
#include <stdio.h>

#include "MyStringFunctions.h"

int main() {
    const char* str = "123456789";

    printf("%c\n", *MyStrChr(str, '2'));
    printf("%c\n", *strchr(str, '2'));

    return 0;
}