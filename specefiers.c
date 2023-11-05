#include "main.h"

int specefier_handle(char specifier, const char *format, int *i, char buffer[], int *buffer_ind, va_list args)
{
	int count = 0;
    switch (specifier)
    {
        case 'c':
            count = print_char(format, i, buffer, buffer_ind, args);
            return (count);
        case 'd':
	case 'i':
            count = print_integer(format, i, buffer, buffer_ind, args);  // Added print_string function
            return (count);
        case '%':
            count = print_precentage(format, i, buffer, buffer_ind);
            return (count);
        default:
	    count = print_unknowchar(format, i, buffer, buffer_ind); 
            return (count);
    }
}



int  print_char(const char *format, int *i, char buffer[], int *buffer_ind, va_list args)
{
	int character =va_arg(args, int);
	handler_buffer(character, buffer, buffer_ind);
	return (1);
}

int print_integer(const char *format, int *i, char buffer[], int *buffer_ind, va_list args)
{
	int len = 1, num, check, digit, sign = 0;

	/*Read the number*/
	num = va_arg(args, int);
	/*if number is neg print the symbol '-'*/
	if (num < 0)
	{
		handler_buffer('-', buffer, buffer_ind);
		num *= -1;
		sign = 1;
	}
	/*count the number length*/
	len = _numlen(num);
	check = _pow(10, len);
	while (check /=10)
	{
		digit = (num / check) % 10;
		//printf("\n check = %d , num = %d ,digit : %d\n",check, num, digit);
		handler_buffer(digit + '0', buffer, buffer_ind);
	}
	return (len + sign);
}
int print_precentage(const char *format, int *i, char buffer[], int *buffer_ind)
{
	handler_buffer('%', buffer, buffer_ind);
	return (1);
}

int print_unknowchar(const char *format, int *i, char buffer[], int *buffer_ind)
{
	handler_buffer('%', buffer, buffer_ind);
	handler_buffer(format[*i], buffer, buffer_ind);
	return (2);
}

void handler_buffer(int character,char buffer[], int *buffer_ind)
{
	if (*buffer_ind >= 1024)
		print_buffer(buffer, buffer_ind);
	buffer[*buffer_ind]= character;
	*buffer_ind += 1;

}


