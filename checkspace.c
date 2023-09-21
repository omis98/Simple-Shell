#include "shell.h"

/**
*checkspace - count spaces in a string
*@str: string
*Return: 0 for not space or non-zero for space
*/

size_t checkspace(char *str)
{
	int i = 0, c = 0;

	while (str[i])
	{
		if (isspace(str[i]))
		{
			c++;
		}
		i++;
	}
	return (c);
}
