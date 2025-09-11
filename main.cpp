#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "MyStringFunctions.h"

int main() {
    char* s = NULL;
    size_t  n = 0;

    MyGetLine(&s, &n, stdin);

    MyPutS(s);
    MyPutS(MyFastStrStr(s, "aba"));

    free(s);

    return 0;
}