#include <stdlib.h>

/**
 *argstostr - concatenates all the arguments of your program.
 *@ac: argc size double pointer
 *@av: argv parameter double pointer
 *Return: new strins by pointer
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i = 0, j = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
	}

	ptr = malloc(sizeof(char) * (ac + k + 1));
	if (!(ptr == NULL))
	{
		k = 0;
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				ptr[k] = av[i][j];
				k++;
			}
			ptr[k] = '\n';
			k++;
		}
		return (ptr);
	}
	else
		return (NULL);
}
