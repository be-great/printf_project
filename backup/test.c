#include <stdio.h>

/**
 * testing : +, -
 * testing : null number => zero length number
 * testing : one lenght number
 * testing : long number
 */

int _numlen(int num)
{

        int count = 1, numcp;
        numcp = num;
	if (numcp < 0)
		numcp *= -1;
        while(numcp /= 10)
                count++;
        return count;


}
int _pow(int num, int power)
{
        int result = num;
        while (--power)
        {
                result *= num;
        }
        return result;
}


int main(void)
{
	printf("%d number length : %d\n", 3, _numlen(-100));/*3*/
        printf("%d number length : %d\n", 1, _numlen(1));/*1*/
        printf("%d number length : %d\n", 10, _numlen(1234567890));/*10*/

	printf("1000 , result : %d\n",  _pow(10, 3));
	printf("100 , result : %d\n",  _pow(10, 2));
	printf("1000000 , result : %d\n",  _pow(10, 6));

	return (0);
}

