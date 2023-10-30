#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: numbers of letters to read and print
 * read by EmEch
 * Return: the actual number of letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *redd;
	ssize_t folder;
	ssize_t wri;
	ssize_t ho;

	folder = open(filename, O_RDONLY);
	if (folder == -1)
		return (0);
	redd = malloc(sizeof(char) * letters);
	ho = read(folder, redd, letters);
	wri = write(STDOUT_FILENO, redd, ho);

	free(redd);
	close(folder);
	return (wri);
}
