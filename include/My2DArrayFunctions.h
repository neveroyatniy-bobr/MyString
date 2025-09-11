#ifndef MY_2D_ARRAY_FUNCTIONS_
#define MY_2D_ARRAY_FUNCTIONS_

#include <stdio.h>

/// @brief Вычисляет указатель на начало строки в 2мерном прямоугольном массиве масивве
/// @param line_num номер строки
/// @param line_size максимальная длина строки
/// @param array2d 2мерный массив
/// @return Указатель на начало строки
int* RectLinePointer(size_t line_num, size_t line_size, int* array2d);

/// @brief Выводит 2мерный массив в поток стандартного вывода
/// @param array_2d массив
/// @param coloumn_size Количество строк
/// @param line_size Максимальная длина строки
void MyPutA2D(int* array_2d, size_t coloumn_size, size_t line_size);

#endif // MY_2D_ARRAY_FUNCTIONS_