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

/// @brief Сравнивает 2 строки
/// @param str1 Строка 1
/// @param str2  Строка 2
/// @return Если чтроки равны возвращает 0, если числовое значение первого несовпавшего символа меньше в строке 1б то -1, иначе 1
int MyStrCmp(const char *str1, const char *str2);

/// @brief Дубилирует строку в свобоное место в памяти
/// @param str Строка
/// @return Указатель на начало дубликата, если места нет возвращает NULL 
char* MyStrDup(const char *str);

#endif // MY_STRING_FUNCTIONS_H_