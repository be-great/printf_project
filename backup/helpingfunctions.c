#include "main.h"

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
