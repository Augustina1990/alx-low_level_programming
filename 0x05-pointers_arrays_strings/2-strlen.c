#include "main.h"
 /**
  *_strlen - checks the length of a string
  *@s: input
  *
  *Return: Always 0 (success)
  */
int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
