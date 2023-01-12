#ifndef FOPS_WRITER
#define FOPS_WRITER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * reader - Reads a file
 * @file : file pointer
 * @count : number of items to read
 * Return: size_t
 */
char *reader(FILE *file, size_t count)
{
	size_t bytes_read;
	char *quote;

	quote = malloc(count);

	bytes_read = fread(&quote, sizeof(char), count, file);

	printf("read characters: %ld\n", bytes_read / sizeof(char));
	return (quote);
}

#endif /* FOPS_WRITER */
