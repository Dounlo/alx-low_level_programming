#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: A pointer to the name of the file
 * @letters: The number of letters the function should read and print
 *
 * Return: the actual number of letters it could read and print
 * Or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, opn, wrt;
	char *poin;

	poin = malloc(sizeof(char) * letters);
	if (poin == NULL || filename == NULL)
		return (0);
	opn = open(filename, O_RDONLY);
	rd = read(opn, poin, letters);
	wrt = write(STDOUT_FILENO, poin, rd);
	if (opn == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(poin);
		return (0);
	}
	free(poin);
	close(opn);
	return (wrt);
}
