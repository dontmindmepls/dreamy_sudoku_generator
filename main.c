#include <stdio.h>
#include <stdlib.h>
#include <functions.c>

void rotate_grid(	);
void shuffle_grid(	);
void print_grid(	);

int main()
{

	int (*grid)[3] = malloc(9 * size);

	if (grid == NULL)
		exit(1);

	int num = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			grid[i][j] = num;
			num++;
		}
			
	}


	/* Rotating the grid (look in functions.c for the code). */

	return 0;
}