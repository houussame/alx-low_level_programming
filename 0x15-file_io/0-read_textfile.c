#include "main.h"

/**
 *read_textfile - function that reads a text file and prints it
 *@filename: name of file to read
 *@letters: number of bytes to read
 *return: number bytes read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ftd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	ftd = open(filename, O_RDONLY);
	if (ftd == -1)
		return (0);
	bytes = read(ftd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(ftd);
	return (bytes);
}
