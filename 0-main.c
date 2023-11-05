#include "main.h"

int print_string_(char *format,...)
{
	va_list args;
	va_start(args, format);
	char* s0=va_arg(args, char*);
	
	while (*s0)
	{
	
		putchar(*s0);
		s0++;
	}
	putchar('\n');
	return (0);

}



int main(void)
{
	char s[]="somestring";
	printf("#### printf\n");
	printf("%d\n",printf("'s' testcase => string : %s\n", "hello"));
	printf("%d\n",printf("'s' testcase => string : %s\n",s));
	//printf("%d\n",printf("'s' testcase => string : %s\n"));
	_printf("#### _printf\n");
	_printf("%d\n",_printf("'s' testcase => string : %s\n", "hello"));
	//_printf("%d\n",_printf("'s' testcase => string : %s\n",s));
	_printf("%d\n",_printf("'s' testcase => string : %s\n"));
	return (0);
}
