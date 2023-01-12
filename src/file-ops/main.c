#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point.
 * @argc : no. of args
 * @argv : array of ptrs to args
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	FILE *file;
	char *file_name;
	size_t write_bytes;
	char *read_result;

	if (argc < 2)
	{
		fprintf(stderr, "Ilegal number of arguments: %d\n", argc);
		exit(1);
	}

	/* step 1: get file_name from args */
	file_name = argv[1];

	/* write into file */
	file = fopen(file_name, "w");
	write_bytes = writer(file);
	fclose(file);
	printf("written characters: %ld\n", write_bytes);

	/* read from file */
	file = fopen(file_name, "r");
	read_result = reader(file, write_bytes);
	puts(read_result);

	free(read_result);
	fclose(file);
	return (0);
}

