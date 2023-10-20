#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: string to be capitalized
 * Return: str
 */

char *cap_string(char *str)
{
	int i;
	char special[] = " \t\n,;.!?''(){}";

	i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}

		for ( ; i < strlen(special); i++)
		{
			if (str[i - 1] == special[i] || i == 0)
			{
				str[i] = str[i] - 32;
			}
		}

		i++;
	}

	return (str);
}
