#include <stdio.h>
#include <stdlib.h>

#define SIZE_MBS(x) (x * 1024 * 1024)
/**
 * main - Entry point.
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int *student_ids;


	student_ids = malloc(sizeof(int) * SIZE_MBS(10));

	for (i = 0; i < SIZE_MBS(10); i++)
	{
		student_ids[i] = rand();
	}

	getchar();
	free(student_ids);
	return (0);
}
