#include <string.h>
#include <stdio.h>

#include "MyStringFunctions.h"

int main() {
    const char* str1 = "1237999999";
    const char* str2 = "123400";

    printf("%d\n", MyStrCmp(str1, str2));
    printf("%d\n", strcmp(str1, str2));

    return 0;
}