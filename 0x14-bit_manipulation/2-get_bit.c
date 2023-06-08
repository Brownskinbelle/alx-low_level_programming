#include "main.h"

/**
 * get_bit - This returns the value of a bit at an index in a decimal number
 * @n: The number to search
 * @index: this the index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_valu;

	if (index > 63)
		return (-1);

	bit_valu = (n >> index) & 1;

	return (bit_valu);
}
