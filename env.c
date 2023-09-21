#include "shell.h"

/**
 * _envivari - environmental variable
 *@envp: **envp from main function
 */

void _envivari(char **envp)
{
	int i = 0;

	while (envp[i] != NULL)
	{
		write(STDOUT_FILENO, envp[i], strlen(envp[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}
