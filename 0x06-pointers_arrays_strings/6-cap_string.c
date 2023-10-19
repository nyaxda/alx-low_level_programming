#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes first words of a string.
 * Description: function that capitalizes first words of a string.
 *
 * @str: pointer to a char
 *
 * Return: capitalized first words of a string (*char).
 */

char *cap_string(char *s)
{
 int i;
 int x;
 int step;
  
 step = 32;
 char sep[] = {' ', '\n', '\t', '?', '"', '(', ')', '.', ',',
    '{', '}', '!', ';',};

 for (i = 0; s[i] != '\0'; i++)
 {
  if (s[i] >= 'a' && s[i] <= 'z')
   s[i] = s[i] - step;
  step = 0;
  for (x = 0; x <= 12; x++)
   if (s[i] == sep[x])
   {
    x = 12;
    step = 32;
   }
 }
 return (s);
}
