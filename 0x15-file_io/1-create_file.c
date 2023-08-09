#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: the name of file to be created
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, otherwise return -1 if file canot be created or file
 * can not be written or write fails
 */


int create_file(const char *filename, char *text_content)
{
	int fd, w, fil = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (fil = 0; text_content[fil];)
			fil++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, fil);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
