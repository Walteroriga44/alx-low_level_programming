#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: ...
 * @letters: ...
 * Return: 0, if filename is NULL
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, t, w = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (-1);
	}

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (-1);
	}

	t = read(fd, buffer, letters);
	if (t == -1)
	{
		perror("Error reading file");
		close(fd);
		free(buffer);
		return (-1);
	}

	w = write(STDOUT_FILENO, buffer, t);
	if (w == -1)
	{
		perror("Error writing to STDOUT");
		close(fd);
		free(buffer);
		return (-1);
	}

	return (w);
}
