#include "sort.h"
/**
 * find_minimum - function that returns the index of
 * the minimum element of an array of integers.
 * @array: array of integers.
 * @index: index to start to compare.
 * @size: size of the array.
 * Return: the index of the minimum element.
 */
int find_minimum(int *array, int index, int size)
{
	int i;
	int minValue = array[index];
	int minIndex = index;

	for (i = minIndex + 1; i < size; i++)
	{
		if (array[i] < minValue)
		{
			minValue = array[i];
			minIndex = i;
		}
	}
	return (minIndex);
}
/**
 * swap - function that swaps 2 integers in an array.
 * @array: array to swap.
 * @first: first index.
 * @second: second index.
 * Return: Nothing it is a void function.
 */
void swap(int *array, int first, int second)
{
	int tmp;

	tmp = array[first];
	array[first] = array[second];
	array[second] = tmp;

}
/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm.
 * @array: array to sort.
 * @size: size of the array.
 * Return: Nothing it is a void function.
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	int min;

	if (array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			min = find_minimum(array, i, (int)size);
			swap(array, i, min);
			if ((int)i != min)
				print_array(array, size);
		}
	}
}
