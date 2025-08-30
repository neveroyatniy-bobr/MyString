#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "MyStringFunctions.h"

int main() {
    char str[100] = "";

    MyFGetS(str, 100, stdin);

    MyPutS(str);

    return 0;
}