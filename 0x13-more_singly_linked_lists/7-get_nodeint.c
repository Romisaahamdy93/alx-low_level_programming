#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: is the head of linked list
 * @index: the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node;
unsigned int x;
if (head != NULL)
{
for (node = head, x = 0; node && x < index; x++)
{
node = node->next;
return (node);
}
}
return (NULL);
}
