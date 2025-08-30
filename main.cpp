#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "MyStringFunctions.h"

int main() {
    const char* str = "1237999999";

    char* str_dup = strdup(str);
    char* my_str_dup = MyStrDup(str);

    printf("%s\n", str_dup);
    printf("%s\n", my_str_dup);

    free(str_dup);
    free(my_str_dup);

    return 0;
}