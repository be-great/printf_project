#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int _printf(const char *format, ...);
char buffer[1024];

/*specifiers*/
int print_char(const char *format, int *i, char buffer[], int *buffer_ind, va_list args);
int print_integer(const char *format, int *i, char buffer[], int *buffer_ind, va_list args);
int print_precentage(const char *format, int *i, char buffer[], int *buffer_ind);
int print_unknowchar(const char *format, int *i, char buffer[], int *buffer_ind);
int specefier_handle(char specifier,const char *format, int *i, char buffer[], int *buffer_ind, va_list args);


/**/
void print_buffer(char buffer[], int *buffer_ind);
void handler_buffer(int character, char buffer[], int *buffer_ind);

/*Helping Function*/
int _numlen(int num);
int _pow(int num, int power);
#endif
