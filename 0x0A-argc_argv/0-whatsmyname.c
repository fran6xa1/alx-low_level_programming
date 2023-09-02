#include <stdio.h>

/**
 * main - This prints the program name followed by a new line
 * @argc: The number of arguments given to the program
 * @argv: An array of pointers to teh arguments
 *
 * Return: Always 0.
 */
 int main(int argc, char *argv[])
 {
	 if (argc > 0)
	 {
		 printf("%s\n", argv[0]);
	 }
	 else
	 {
		 printf("Cannot determine program name. \n");
	 }
	 return (0);
 }
