#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTION_H

/*
 * File: variadic_functions.h
 * Auth: Balogun Murtadho
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0F-variadic_functions directory.
 */

#include <stdarg.h>

/**
 * struct pter - pointer to print all
 * @test: pointer to input for test
 * @printer: pointer to function
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

void print_int(va_list arg);
void print_char(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
