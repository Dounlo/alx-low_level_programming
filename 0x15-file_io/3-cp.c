#include "main.h"
#include "stdio.h"
/******CHECK1*****/
/**
 * check1 - checks the number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void check1(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/*********Create a buffer********/
/**
 * create_buf - creates buffer
 * @file: the name of file the buffer is storing chars from
 *
 * Return: a buffer
 */
char *create_buf(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/************Close files*********/
/**
 * close_fi - closes files
 * @fd: the file to close
 *
 * Return: void
 */
void close_fi(int fd)
{
	int s;

	s = close(fd);
	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**********the main program********/
/**
 * main - opies the content of a file to another file
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, rd, wrt;
	char *buffer;
	mode_t file_permis;

	check1(argc);
	buffer = create_buf(argv[2]);
	file_permis = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	from_fd = open(argv[1], O_RDONLY);
	rd = read(from_fd, buffer, 1024);
	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, file_permis);
	do {
		if (from_fd == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wrt = write(to_fd, buffer, rd);
		if (to_fd == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(from_fd, buffer, 1024);
		to_fd = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buffer);
	close_fi(from_fd);
	close_fi(to_fd);
	return (0);
}
