#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		size_t len = strlen(text_content);

		w = write(fd, text_content, len);

		if (w == -1)
		{
			close(fd);
			return (-1);
		}
		if ((size_t)w != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (-1);
}
