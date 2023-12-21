#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: key string
 * @size: the size of the array of the hash table
 * Return: index at which the key/value 
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value, index;
if (key == NULL || size == 0)
return (0);
hash_value = hash_djb2(key) % size;
return (index);
}
