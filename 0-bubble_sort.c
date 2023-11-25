#include "sort.h"

/**
 * swap_ints -  a function that takes 2 elements of an array and swap them
 * @b: bigger one
 * @s: smaller one
 *
 * Return: nothing
 */
void swap_ints(int *b, int *s)
{
	int tmp;

	tmp = *b;
	*b = *s;
	*s = tmp;
}

/**
 * bubble_sort - sorting an array using bubble method
 * @array: pointer to an array of integers
 * @size: int size of array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	unsigned long int i = 0, j = 0;
	int temp;

	if (size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size; j++)
		{
			/*swap*/
			if (array[j - 1] > array[j])
			{
				swap_ints(array + j, array + j + 1);
			}
			print_array(array, size);
		}
	}
}
