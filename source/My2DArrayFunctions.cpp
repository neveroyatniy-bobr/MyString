#include "My2DArrayFunctions.h"

#include <stdio.h>

int* RectLinePointer(size_t line_num, size_t line_size, int* array2d) {
    return (int*)((size_t)array2d + line_num * line_size * sizeof(array2d[0]));
}

void MyPutA2D(int* array_2d, size_t coloumn_size, size_t line_size) {
    int* line_pointer =  NULL;
    int* next_line_pointer = RectLinePointer(0, line_size, array_2d);
    for (size_t i = 0; i < coloumn_size; i++) {
        line_pointer = next_line_pointer;
        next_line_pointer = RectLinePointer(i + 1, line_size, array_2d);
        size_t current_line_size = (size_t)(next_line_pointer - line_pointer);

        for (size_t j = 0; j < current_line_size; j++) {
            int* elem_pointer = (int*)((size_t)line_pointer + j * (sizeof(array_2d[0])));
            
            printf("%d ", *elem_pointer);
        }
        printf("\n");
    }
}