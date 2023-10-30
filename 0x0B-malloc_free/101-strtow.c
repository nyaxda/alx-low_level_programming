#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int word_length(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_length - Locates the index marking the end of the first 
 * word contained in a string.
 * @str: The string to be searched.
 *
 * Return: index marking end of initial word.
 */
int word_length(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */

int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_length(str + index);
		}
	}

	return (words);
}

/**
 * strtow - splits a string into words.
 * Description: function that splits a string into words.
 * Each element of this array contains a single word,
 * null-terminated. The last element of the returned array
 * is NULL. Words are separated by spaces
 *
 *@str: pointer to a string.
 *
 * Return: NULL if str = NULL or str = "".
 *If the function fails, it returns NULL.
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_length(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}