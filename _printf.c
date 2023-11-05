#include "main.h"

int _printf(const char* format, ...)
{
	int i, buffer_ind = 0;
	va_list args;
	int plus = 0;
	int mins = 0;
	int numberofchar = 0;
	va_start(args, format);
	
	for (i = 0; format && format[i] != '\0'; i++)
	{
		
		if (format[i] != '%')
		{
			if (buffer_ind >= 1024)
				print_buffer(buffer, &buffer_ind);	
			buffer[buffer_ind++]=format[i];
			numberofchar++;
		}
		else
		{
			print_buffer(buffer, &buffer_ind);
			i++;
			numberofchar += specefier_handle(format[i],format, &i, buffer, &buffer_ind, args);
	       	}
	}
	print_buffer(buffer, &buffer_ind);
	va_end(args);
	return (numberofchar);
}


void print_buffer(char buffer[], int *buffer_ind)
{
	int j = 0;
	while (j  < *buffer_ind)
	{
		write(1, &buffer[j], 1);
		j++;
	}
	*buffer_ind = 0;
}
