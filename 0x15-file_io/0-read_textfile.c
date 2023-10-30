#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ftd;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);

	ftd = open(filename, O_RDONLY);

	if (ftd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nrd = read(ftd, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(ftd);

	free(buff);

	return (nwr);
}
