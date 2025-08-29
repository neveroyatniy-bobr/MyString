#ifndef MY_STRING_FUNCTIONS_H_
#define MY_STRING_FUNCTIONS_H_

#include <stdio.h>

/// @brief Ищет первое появление символа в строке
/// @param str Строка
/// @param ch Символ
/// @return Указатель на символ в строке
const char* MyStrChr(const char* str, int ch);

/// @brief Ищет длину строки без нуль-терминатора
/// @param str Строка
/// @return Длину строки
size_t MyStrLen(const char* str);

/// @brief Копирует строку из источника в назначение
/// @param destination Назначение
/// @param source Источник
/// @return Назначение
char* MyStrCpy(char* destination, const char* source);

/// @brief Копирует не более n символов из источника в назначение
/// @param destination Назначение
/// @param source Источник
/// @param n n
/// @return Назначение
char* MyStrNCpy(char* destination, const char* source, size_t n);

/// @brief Объединяет 2 строчки копируя источник в конец назначения
/// @param destination Назначение
/// @param source Источник
/// @return Назначение, в конец которого скопирован источник
char* MyStrCat(char *destination, const char *source);

#endif // MY_STRING_FUNCTIONS_H_