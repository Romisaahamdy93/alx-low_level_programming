#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: is the head of linked list
 * @idx: is the index of list
 * @n: new node to add
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *new = *head;
unsigned int x;
if (new == NULL && idx != 0)
return (NULL);
while (new && x < idx - 1)
{
new = new->next;
x++;
}
new_node = malloc(sizeof(listint_t));
if (new_node != NULL)
{
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
if (x == idx - 1)
{
new_node->next = new->next;
new->next = new_node;
return (new_node);
}
}
return (NULL);
}
