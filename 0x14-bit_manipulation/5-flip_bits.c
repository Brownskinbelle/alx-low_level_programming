#include "main.h"

/**
 * flip_bits - This counts the number of bits to change
 * to get from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, sum = 0;
	unsigned long int draft;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		draft = exclusive >> i;
		if (draft & 1)
			sum++;
	}

	return (sum);
}
