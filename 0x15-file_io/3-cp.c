#include "holberton.h"
/**
 *main - copies the contents of a file to another
 *Description:cp file_from file_to
 *@argv:arguement vector
 *@argc:arguement count
 *Return:1 - success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t read_l = 1024, write_l;
	char buff[1024];

/*check for incorrect no. of arguements*/
	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
	{dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
	while (read_l == 1024)
	{
		read_l = read(fd_from, buff, 1024);
		if (read_l == -1)
		{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		write_l = write(fd_to, buff, read_l);
		if (write_l == -1)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	}
	if (close(fd_from) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{dprintf(STDERR_FILENO, "Error: Cant't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
