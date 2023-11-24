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

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			/*swap*/
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			print_array(array, size);
		}
	}
}
