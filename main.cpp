#include <string.h>
#include <stdio.h>

#include "MyStringFunctions.h"

int main() {
    const char* str = "123456789";

    printf("%d\n", strlen(str));
    printf("%d\n", MyStrLen(str));

    return 0;
}