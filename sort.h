#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 *
 * Description: Node of a doubly linked list used for sorting algorithms.
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Function prototypes */

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @size: Number of elements in the array
 */
void print_array(const int *array, size_t size);

/**
 * print_list - Prints a doubly linked list of integers
 * @list: The list to be printed
 */
void print_list(const listint_t *list);

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: Array of integers
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);

#endif /* SORT_H */
