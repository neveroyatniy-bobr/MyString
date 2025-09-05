#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "MyStringFunctions.h"

int main() {
    const char* s = "ladsgjkhhhljkasfhjklsHELLOfahjkladsgkhjkladgshjkladgs";

    puts(MyStrStr(s, "HELLO"));

    return 0;
}