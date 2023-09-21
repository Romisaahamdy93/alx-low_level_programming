#include "lists.h"
#include <stdio.h>
/**
 * list_len -  returns the number of elements in a linked
 * @h: is the lists to print
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
int count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
