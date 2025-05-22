// C program to print
// inverted pyramid
// pattern
#include <stdio.h>

// Driver code
int main()
{
	int i, j, rows;

	scanf("%d",&rows);

	for (i = 1; i <= rows; i++)
	{
		// Loop to print the blank spaces
		for (j = 1; j < i; j++)
		{
			printf(" ");
		}

		// Loop to print the stars
		for (j = 1;
			j <= (rows * 2 - (2 * i - 1));
			j++)
		{
			printf("*");
		}

		// Move to the next line to
		// complete the pattern
		printf("\n");
	}

	return 0;
}
