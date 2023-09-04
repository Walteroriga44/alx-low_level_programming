#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile -  reads text file and prints to the POSIX standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t bytes_read;
	ssize_t bytes_written;


	if (filename == NULL)
	{
		return (0);
	}

	if (file_descriptor == -1)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);

	if (bytes_read == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(file_descriptor);
	free(buffer);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		return (0);
	}

	return (bytes_written);
}
