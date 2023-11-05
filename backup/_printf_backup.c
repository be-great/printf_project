#include "main.h"


void print_buffer(char *buffer, int *buffer_ind);

int _printf(const char* format, ...)
{
	int i, buffer_ind = 0;
	va_list args;
	int plus = 0;
	int mins = 0;
	char buffer[1024];

	va_start(args, format);
	
	for (i = 0; format && format[i] != '\0'; i++)
	{
		
		if (format[i] != '%')
		{
			if (buffer_ind >= 1024)
				print_buffer(buffer, &buffer_ind);	
			if (format[i] == 'd')
			{
				int number = va_arg(args, int);
				if (plus)
				{
					buffer[buffer_ind++] = '+';
					
				}
				if (mins)
				{
					buffer[buffer_ind++] = '-';
				}
				buffer[buffer_ind++] = number + '0';
			}
			else 
			{
			buffer[buffer_ind]=format[i];
			buffer_ind++;
			}

		}
		else
		{
			if (format[i+1] == '+')
                        {
				plus = 1;
				while(format[i+1] =='+')
					i++;
			}
			if (format[i+1] == '-')
                        {
				mins = 1;
				while(format[i+1] =='-')
					i++;
			}
	       }
	}
	print_buffer(buffer, &buffer_ind);
	va_end(args);
	return (0);
}


void print_buffer(char buffer[], int *buffer_ind)
{
	int j = 0;
	while (j  <= *buffer_ind)
	{
		write(1, &buffer[j], 1);
		j++;
	}
	*buffer_ind = 0;
}
