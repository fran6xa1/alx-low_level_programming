#include "main.h"

/**
 *reverse_array - this is a function that rearranges the content of an array of
 *integers
 *@n: number of elements of the array
 *@*a: pointer
 *
 *return: reverse
 */
void reverse_array(int *a, int n)
{
	int back = 0;
	int forward = n - 1;

	while (back < forward)
	{
		int temporary = a[back];
		a[back] = a[forward];
		a[forward] = temporary;

		back++;
		forward--;
	}
}
