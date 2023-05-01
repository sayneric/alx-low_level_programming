#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of unique nodes in a looped
 * listint_t linked list
 * @head: a pointer to the head of the listint_t to check
 *
 * Return: if the list is not looped - 0, otherwise - the number of unique
 * nodes in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *messi, *cr7;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	messi = head->next;
	cr7 = (head->next)->next;
	while (cr7)
	{
		if (messi == cr7)
		{
			messi = head;
			while (messi != cr7)
			{
				nodes++;
				messi = messi->next;
				cr7 = cr7->next;
			}
			messi = messi->next;
			while (messi != cr7)
			{
				nodes++;
				messi = messi->next;
			}
			return (nodes);
		}
		messi = messi->next;
		cr7 = (cr7->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t list safely
 * @head: a pointer to the head of the listint_t list
 *
 * Return: the number of nodes in the list
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head,  head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
