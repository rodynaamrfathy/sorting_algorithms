#include "sort.h"

/**
 * swap_nodes - swap the nodes
 * @head: a pointer to the head of the list.
 * @node1: the first node.
 * @node2: the 2nd node
 *
 * Return: nothing
 */
void swap_nodes(listint_t **head, listint_t *node1, listint_t *node2)
{
	listint_t *x = NULL; /*node before node1*/
	listint_t *y = NULL; /*node before node2*/

	x = node1->prev;
	y = node2->next;

	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*head = node2;

	if (node2->next != NULL)
		node2->next->prev = node1;

	node1->next = y;
	node1->prev = node2;

	node2->next = node1;
	node2->prev = x;
}

/**
 * insertion_sort_list -  a function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: pointer to the head if the list.
 *
 * Return: nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *nextcheck;
	listint_t *check = *list;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	check = check->next;
	nextcheck = check->next;
	while (check != NULL)
	{
		nextcheck = check->next;
		while (check->prev != NULL && check->n < check->prev->n)
		{
			swap_nodes(list, check->prev, check);
			print_list(*list);
		}
		check = nextcheck;
	}
}
