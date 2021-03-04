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
	int i = 0, j;
	
	if (argc != 3)
	{
		printf("%s\n","Error");
		exit(98);
	}
	for (i = 0; i < argc; i++)
	{
		for (j = 0; arg
