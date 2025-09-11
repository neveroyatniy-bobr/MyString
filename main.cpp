#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "MyStringFunctions.h"
#include "My2DArrayFunctions.h"

int main() {
    int array2d[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

    MyPutA2D(*array2d, 2, 3, RectLinePointer);

    printf("%d\n", *MyGetElemA2D(*array2d, 0, 1, 3, RectLinePointer));

    return 0;
}