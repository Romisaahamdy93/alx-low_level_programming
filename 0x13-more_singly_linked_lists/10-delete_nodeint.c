#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index 
 * @head: is the head of linked list
 * @idx: is the index of list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *delete = *head;
listint_t *new;
unsigned int x;
if (*head == NULL)
return (-1);
for (x = 0; x < idx; x++)
{
new = delete;
if (delete->next != NULL)
delete = delete->next;
else
return (-1);
}
if (idx == 0)
{
*head = delete->next;
}
else if (delete->next != NULL)
{
new->next = delete->next;
}
else
{
new->next = NULL;
}
free(delete);
return (1);
}

