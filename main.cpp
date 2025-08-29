#include <string.h>
#include <stdio.h>

#include "MyStringFunctions.h"

int main() {
    const char* str = "123456";
    char strcp[10];
    strcp[9] = '\0';

    printf("%s\n", MyStrNCpy(strcp, str, 5));

    printf("%s\n", str);
    printf("%s\n", strcp);

    return 0;
}