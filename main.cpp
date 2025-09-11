#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "MyStringFunctions.h"
#include "My2DArrayFunctions.h"

int main() {
    int array2d[100] = {};

    MyGetA2D(array2d, 3, 3, TriangleLinePointer);

    MyPutA2D(array2d, 3, 3, TriangleLinePointer);

    printf("%d\n", *MyGetElemA2D(array2d, 1, 1, 3, TriangleLinePointer));

    return 0;
}