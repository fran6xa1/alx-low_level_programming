#include "main.h"

/**
 * read_textfile - Reads a text file and prints the letters.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The number of letters it could read and print. If fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;
	size_t total_bytes_read = 0;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}

	while ((bytes_read = read(file_descriptor, buffer, letters)) > 0)
	{
		buffer[bytes_read] = '\0';
		total_bytes_read += bytes_read;
		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			free(buffer);
			close(file_descriptor);
			return (0);
		}
	}

	free(buffer);
	close(file_descriptor);

	return (total_bytes_read);
}
