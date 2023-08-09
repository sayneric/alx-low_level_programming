#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of the file to be read and printed
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print, otherwise
 * return 0 if filename is NULL or if the file cannot be opened or read
 * or if write fails or does not write the expected bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t b;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	b = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, b);

	free(buff);
	close(fd);
	return (w);
}
