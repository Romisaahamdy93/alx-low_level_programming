#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list
 * @head: is the head of linked list
 */
void free_listint2(listint_t **head)
{
listint_t *node;
if (head == NULL)
return;
while (*head != NULL)
{
node = (*head);
*head = (*head)->next;
free(node);
}
*head = NULL;
}
