#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: is the head of linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
