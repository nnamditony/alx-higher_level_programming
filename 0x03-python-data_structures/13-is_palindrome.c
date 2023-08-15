#include "lists.h"

listint_t *reverse_list(listint_t *head);
int is_palindrome(listint_t **head);

/**
 * reverse_list - Reverses a singly linked list
 * @head: Pointer to the first node
 *
 * Return: Pointer to the reversed list
 */
listint_t *reverse_list(listint_t *head)
{
	listint_t *current = head, *prev = NULL, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	return (prev);
}

/**
 * is_palindrome - Checks if a linked list is a palindrome
 * @head: Pointer to the head node
 *
 * Return: 0 if not a palindrome and 1 if palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head, *prev_slow = *head;
	listint_t *first_half = *head, *second_half = NULL;

	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		prev_slow = slow;
		slow = slow->next;
	}

	if (fast != NULL)
	{
		slow = slow->next;
	}
	second_half = reverse_list(slow);
	prev_slow->next = NULL;

	while (first_half != NULL && second_half != NULL)
	{
		if (first_half->n != second_half->n)
			return (0);
		first_half = first_half->next;
		second_half = second_half->next;
	}

	return (1);
}
