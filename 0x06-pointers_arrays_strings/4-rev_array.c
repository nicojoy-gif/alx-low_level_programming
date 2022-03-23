#include "main.h"

/**
 * reverse_array - entry point
 * Description - it reverse the content of an array of integers
 * @a: variable used
 * @n: variable used
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int low;
	int high;
	int temp;

	for (low = 0, high = n - 1; low < high; low++, high--)
	{
		temp = a[low];
		a[low] = a[high];
		a[high] = temp;
	}
}
