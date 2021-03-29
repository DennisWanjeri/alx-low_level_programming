#include "holberton.h"
/**
 *read_textfile - reads a text file and prints it to the
 *POSIX standard output
 *@filename:pointer to file description
 *@letters:number of letters it should read and print
 *Return:actual no. of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes;
	char *buf;

/*check if pointer is NULL or letters < 1*/
	if (filename == NULL)
		return (0);
	if (letters < 1)
		return (0);

	fd = open(filename, O_RDONLY);
/*if the process is not successful*/
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	bytes = read(fd, buf, letters);
	buf[bytes + 1] = '\0';

	write(STDOUT_FILENO, buf, bytes);
	close(fd);
	free(buf);
	return (bytes);
}
