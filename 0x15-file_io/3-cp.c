#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void print_error(int error_code, const char *message, const char *file_name)
{
	fprintf(stderr, "%s", message);
	exit(error_code);
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t read_result, write_result;
	char buffer[1024];

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error(99, "Error: Can't write to %s\n", argv[2]);

	while ((read_result = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
	write_result = write(fd_to, buffer, read_result);
	if (write_result == -1)
		print_error(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (read_result == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
		print_error(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		print_error(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}

