#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "MyStringFunctions.h"

int main() {
    const char* s = "fahdpfaaphapahfdhdfshphfafaddd";

    puts(MyStrRChr(s, 'a'));

    return 0;
}