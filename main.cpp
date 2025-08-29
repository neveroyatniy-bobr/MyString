#include <string.h>
#include <stdio.h>

#include "MyStringFunctions.h"

int main() {
    const char* str = "123456789";
    char strcp[10];

    printf("%s\n", MyStrCpy(&strcp[0], str));

    printf("%s\n", str);
    printf("%s\n", strcp);

    return 0;
}