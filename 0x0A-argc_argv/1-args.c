#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of argument passed to program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always success
 */


int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
