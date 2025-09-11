#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "MyStringFunctions.h"
#include "My2DArrayFunctions.h"

int main() {
    int array2d[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

    MyPutA2D(*array2d, 2, 3);

    return 0;
}