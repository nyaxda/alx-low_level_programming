/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * Description: function that returns 1 if a string
 * is a palindrome and 0 if not.
 *
 *@s: char variable to check
 *
 * Return: 1 is its a palindrome and 0 if not.
 *
 */


int is_palindrome(char *s)
{
	int len = strlen(s);

	return (modifier(s, len, 0));
}

/**
 * modifier - Recursively check if a string is a palindrome.
 * @s: The input string to check.
 * @len: The length of the input string.
 * @i: The current position in the string to compare.
 *
 * This function recursively checks if a string is a palindrome by comparing
 * characters from the beginning and end of the string inward.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int modifier(char *s, int len, int i)
{
	len = strlen(s);

	if (s[i] != s[len - 1 - i])
	{
		return (0);
	}
	if (i == len / 2)
	{
		return (1);
	}
	return (modifier(s, len, i + 1));
}
