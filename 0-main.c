#include "main.h"




int main(void)
{
	printf("### printf :- \n");
	printf("num : %d\n",printf("'d' testcase => num : %d\n", 100));
	printf("num : %d\n",printf("'d' testcase => num : %d\n", -100));
	printf("num : %d\n",printf("'i' testcase => num : %i\n", 100));
	printf("num : %d\n",printf("'i' testcase => num : %i\n", -100));
	printf("num : %d\n",printf("'c' testcase => char : %c\n", 'c'));
	printf("num : %d\n",printf("precentage testcase => char : %%\n"));
	printf("num : %d\n",printf("normal string\n"));

	_printf("### _printf :- \n");
	_printf("num : %d\n",_printf("'d' testcase => num : %d\n", 100));
	_printf("num : %d\n",_printf("'d' testcase => num : %d\n", -100));
	_printf("num : %d\n",_printf("'i' testcase => num : %i\n", 100));
	_printf("num : %d\n",_printf("'i' testcase => num : %i\n", -100));
	_printf("num : %d\n",_printf("'c' testcase => char : %c\n", 'c'));
        _printf("num : %d\n",_printf("precentage testcase => char : %%\n"));
        _printf("num : %d\n",_printf("normal string\n"));
	return (0);
}
