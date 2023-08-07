#include "main.h"
/**
 *create_file - creates a file
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a string to write to the file
 *
 * Return: -1 if the function fails else 1
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wrt, length;

	length = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}
	opn = open(filename, O_CREAT || O_RDWR || O_TRUNC, 0600);
	wrt = write(opn, text_content, length);

	if (opn == -1 || wrt == -1)
		return (-1);
	close(opn);
	return (1);
}
