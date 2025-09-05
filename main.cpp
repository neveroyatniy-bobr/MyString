#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "MyStringFunctions.h"

int main() {
    const char* s = "+1000";

    printf("%d", MyAToI(s));

    return 0;
}