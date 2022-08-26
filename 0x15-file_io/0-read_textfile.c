#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file
 * @filename: The fle name
 * @letters: The amount of letters to read and print
 * Return: Actual number of letters it could read and prnt
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr;
	char *buff;
	ssize_t sz;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	sz = read(fd, buff, letters);
	if (sz == -1)
		return (0);

	buff[sz] = '\0';
	wr = write(STDOUT_FILENO, buff, sz);
	if (wr == -1)
		return (0);

	free(buff);
	close(fd);
	return (sz);
}

