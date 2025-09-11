#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "MyStringFunctions.h"
#include "My2DArrayFunctions.h"

int main() {
    int array2d[6] = { 0, 1, 2, 3, 4, 5 };

    MyPutA2D(array2d, 3, 3, TriangleLinePointer);

    printf("%d\n", *MyGetElemA2D(array2d, 1, 1, 3, TriangleLinePointer));

    return 0;
}