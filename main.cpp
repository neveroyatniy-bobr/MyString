#include <string.h>
#include <stdio.h>

#include "MyStringFunctions.h"

int main() {
    const char* str = "123";
    char strcp[20] = "123456";

    printf("%s\n", MyStrCat(strcp, str));

    printf("%s\n", str);
    printf("%s\n", strcp);

    return 0;
}