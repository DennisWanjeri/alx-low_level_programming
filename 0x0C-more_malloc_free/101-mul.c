#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *
 *@argc:arguement count
 *@argv:arguement vector
 *Return:(0- success)
 */
int main(int argc, char *argv[])
{
	unsigned long int m;
	int i = 0, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	m = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", m);
	return (0);
}
