#include "main.h"
/**
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t rd, opn, wrt;
	size_t *poin;

	poin = malloc(sizeof(char) * letters);
	if (poin == NULL || filename == NULL)
		return (0);
	opn = open(filename, O_RDONLY);
	rd = read(opn, poin, letters);
	wrt = write(STDOUT_FILENO, poin, rd);
	if (opn == -1 || rd == -1 || wrt == -1 || wrt != read)
	{
		free(poin);
		return (0);
	}
	free(poin);
	close(opn);
	return (wrt);
}
