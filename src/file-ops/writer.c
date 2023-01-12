#ifndef FOPS_WRITER
#define FOPS_WRITER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARRAY_SIZE 1024

/**
 * writer - Writes into a file
 * @file : file pointer
 * Return: size_t
 */
size_t writer(FILE *file)
{
	size_t write_bytes;
	size_t quote_len;
	char *quote;

	quote = "Never forget why you started!\0";
	quote_len = strlen(quote);

	write_bytes = fwrite(&quote, sizeof(char), quote_len, file);

	return (write_bytes);
}

#endif /* FOPS_WRITER */
