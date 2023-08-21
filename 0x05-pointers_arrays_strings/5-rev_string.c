#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: is the parameter to check
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
int i, j, k;
char temp;
while (s[i] != '0')
{
i++;
}
for (j = 0; j < i; j++)
{
s[i]++;
}
for (k = 0; k < (i / 2; k++)
{
temp = s[i];
s[i] = s[i - 1 - k];
s[i - 1 - k] = temp;
}
}
