#ifndef MY_2D_ARRAY_FUNCTIONS_
#define MY_2D_ARRAY_FUNCTIONS_

#include <stdio.h>

typedef int* (*LinePointer)(int* array2d, size_t line_num, size_t line_size);

/// @brief Вычисляет указатель на начало строки в 2мерном прямоугольном массиве масивве
/// @param line_num Номер строки
/// @param line_size Максимальная длина строки
/// @param array2d 2мерный массив
/// @return Указатель на начало строки
int* RectLinePointer(int* array2d, size_t line_num, size_t line_size);

/// @brief Вычисляет указатель на начало строки в 2мерном треугольном массиве масивве
/// @param line_num Номер строки
/// @param line_size Максимальная длина строки
/// @param array2d 2мерный массив
/// @return Указатель на начало строки
int* TriangleLinePointer(int* array2d, size_t line_num, size_t line_size);

/// @brief Вычисляет указатель на элемент в i строке и j столбце 2мерного массива 
/// @param array_2d 2мерный массив
/// @param i i
/// @param j j
/// @param line_size максимальная длина строки
/// @param line_pointer_func Функция вычисления n-ой строчки 
/// @return 
int* MyGetElemA2D(int* array_2d, size_t i, size_t j, size_t line_size, LinePointer line_pointer_func);

/// @brief Выводит 2мерный массив в поток стандартного вывода
/// @param array_2d Массив
/// @param coloumn_size Количество строк
/// @param line_size Максимальная длина строки
/// @param line_pointer_func Функция вычисления n-ой строчки 
void MyPutA2D(int* array_2d, size_t coloumn_size, size_t line_size, LinePointer line_pointer_func);

#endif // MY_2D_ARRAY_FUNCTIONS_