#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
*check_num - check - string there are digit
*@str:array str
*
*Return: Always 0 (success)
*/

int check_num(char *str)
{
	/*declaration of varaibles*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*check if str are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
*main - print the name of the program
*@argc: count arguments
*@argv: arguments
*
*Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	/*Declaration of variables*/
	int count, str_to_int, sum = 0;

	count = 0;
	while (count < argc) /*goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to int */
			sum += str_to_int;
		}
		/* condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
