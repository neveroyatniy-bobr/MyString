#include "My2DArrayFunctions.h"

#include <stdio.h>

int* RectLinePointer(int* array2d, size_t line_num, size_t line_size) {
    return (int*)((size_t)array2d + line_num * line_size * sizeof(array2d[0]));
}

int* MyGetElemA2D(int* array_2d, size_t i, size_t j, size_t line_size, LinePointer line_pointer_func) {
    int* line_pointer = line_pointer_func(array_2d, i, line_size);
    int* elem_pointer = (int*)((size_t)line_pointer + j * (sizeof(array_2d[0])));

    return elem_pointer;
}

void MyPutA2D(int* array_2d, size_t coloumn_size, size_t line_size, LinePointer line_pointer_func) {
    int* line_pointer =  NULL;
    int* next_line_pointer = (*line_pointer_func)(array_2d, 0, line_size);
    for (size_t i = 0; i < coloumn_size; i++) {
        line_pointer = next_line_pointer;
        next_line_pointer = (*line_pointer_func)(array_2d, i + 1, line_size);
        size_t current_line_size = (size_t)(next_line_pointer - line_pointer);

        for (size_t j = 0; j < current_line_size; j++) {
            int* elem_pointer = (int*)((size_t)line_pointer + j * (sizeof(array_2d[0])));
            
            printf("%d ", *elem_pointer);
        }
        printf("\n");
    }
}