#include "main.h"
#include <stdio.h>

/**
 * main - prints all  arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char  *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n",  argv[1]);
	}
	return (0);
}
