#include "3-calc.h"
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints tge results of simple operations
 * @argc: The number of arguments
 * @argv: An array of pointers to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	switch (argv[2][0])
	{
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
		case '%':
			if (num2 == 0)
			{
				printf("Error\n");
				return (100);
			}
			result = (argv[2][0] == '/') ? num1 / num2 : num1 % num2;
			break;
		default:
			printf("Error\n");
			return (99);
	}
	printf("%d\n", result);
	return (0);
}
