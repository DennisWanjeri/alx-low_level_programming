#include "holberton.h"
/**
 *create_file - creates a file
 *@filename:name of file to create
 *@text_content:Null terminated string to print to the file
 *Return:1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
/*if text_content is NULl, should be empty*/
	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i]; i++)
		;
	if (write(fd, text_content, i) == -1)
	{
		return (-1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
