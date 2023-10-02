#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	int o = open(filename, O_RDONLY);

	if (o == -1)
	{
		perror("Error opening file");
		return (0);
	}
	char *buffer = malloc(letters);

	if (buffer == NULL)
	{
		perror("Error allocating memory");
		close(o);
		return (0);
	}
	ssize_t r = read(o, buffer, letters);

	if (r == -1)
	{
		perror("Error reading file");
		free(buffer);
		close(o);
		return (0);
	}
	ssize_t w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(o);
	if (w == -1 || w != r)
	{
		perror("Error writing to stdout");
		return (0);
	}
	return (r);
}
