#include "main.h"

/**
 * create_file - function to create a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 if it success or -1 if file cannot be created
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
		i++;

	w = write(fd, text_content, i);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
