#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character, starting with 1st character.
 * Description: function that prints every other xter,then a new line.
 *
 *@str: pointer to a char
=======
 * @str: pointer to a char
>>>>>>> 45f09345dcd66dfd4f0b40e5dd973a3739d75422
 *
 * Return: void
 */
void puts2(char *str)
{
    size_t i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
<<<<<<< HEAD
}
=======
}
>>>>>>> 45f09345dcd66dfd4f0b40e5dd973a3739d75422
