#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file
 * @text_content: terminated string to add at the end of the file
 * Return: 1 if it success or -1 if it failed
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
