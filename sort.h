#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **list, listint_t *current, listint_t *B);
void selection_sort(int *array, size_t size);
int find_minimun(int *array, int index, int size);
void swap(int *array, int first, int second);
int array_partition(int *array, int start, int end, size_t size);
void sort(int *array, int start, int end, size_t size);
void quick_sort(int *array, size_t size);
#endif /* SORT_H */
