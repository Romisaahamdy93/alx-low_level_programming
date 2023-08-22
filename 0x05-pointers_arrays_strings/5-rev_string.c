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
int l, n, i;
char temp;
l = 0;
n = 0;
while (s[l] != '\0')
{
l++;
}
n = l - 1;
for (i = 0; i < l / 2; i++)
{
temp = s[i];
s[i] = s[n];
s[n--] = temp;
}
}
