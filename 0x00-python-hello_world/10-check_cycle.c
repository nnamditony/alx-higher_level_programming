#include "lists.h"

/**
 * check_cycle - checks if a linked list has a cycle
 * @list: linked list to check for cycle
 *Return: Returns 1 if there's cycle, else 0.
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list, *fast = list;

	if (!list)
		return (0);
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return (1);
		}

	}
	return (0);
}
