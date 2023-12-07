#include "lists.h"
/**
 * sum_dlistint - eturns the sum of all the data (n) of linked list
 * @head: is the head of list
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum;
for (sum = 0; head != NULL; head = head->next)
sum = sum + head->n;
return (sum);
}
