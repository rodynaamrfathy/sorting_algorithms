#include "sort.h"

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
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
			print_array(array, size);
		}
	}
}
