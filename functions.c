#include <stdio.h>
#include <stdlib.h>

/*
void rotate_grid(int(*grid)[3])
{
	int random = rand() % 4;
	
	// This first one is to rotate the matrix in a certain way. I like to do it counterclockwise,
	// but you can modify this algorithm as you please. 
	

	if (random != 0)
	{
		for (int i = 0; i < random; i++)
		{
			
			int temp2 = grid[0][1];
			int temp8 = grid[2][1];

			int temp3 = grid[0][2];
			int temp6 = grid[1][2];
			int temp9 = grid[2][2];

			int temp1 = grid[0][0];
			int temp4 = grid[1][0];
			int temp7 = grid[2][0];

			grid[0][0] = temp9; // 2 2
			grid[0][1] = temp6; // 1 2
			grid[0][2] = temp3; // 0 2

			grid[1][0] = temp2; // 0 1
			grid[1][2] = temp8; // 2 1

			grid[2][0] = temp1; // 0 0
			grid[2][1] = temp4; // 1 0
			grid[2][2] = temp7; // 2 0
		}
	}
} */

/*
void shuffle_grid(int(*grid)[3])
{
	
	// This next one is to shuffle rows with rows. 
	// The same statement applies as above.
	

	int random = rand() % 3;

	if (random != 0)
	{
		for (int i = 0; i < random; i++)
		{
			int temp[3] = grid[0];
			grid[0] = grid[1];
			grid[1] = grid[2];
			grid[2] = temp;
		}
	}

	
	// This final one is to shuffle columns with columns.
	// The same statement applies as above.
	

	random = rand() % 3;

	if (random != 0)
	{
		for (int i = 0; i < random; i++)
		{
			int temp1, temp2, temp3;

			temp1 = grid[0][0];
			temp2 = grid[1][0];
			temp3 = grid[2][0];

			grid[0][0] = grid[0][1];
			grid[1][0] = grid[1][1];
			grid[2][0] = grid[2][1];

			grid[0][1] = grid[0][2];
			grid[1][1] = grid[1][2];
			grid[2][1] = grid[2][2];

			grid[0][2] = temp1;
			grid[1][2] = temp2;
			grid[2][2] = temp3;		
		}
	}
} */

void print_grid(int (*ptr)[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		printf("[ ");
		for (int j = 0; j < 3; j++)
		{
			if ((*ptr)[i][j] != 0)
				printf(" %d ", (*ptr)[i][j]);
			else
				printf(" _ ");	
		}
		printf(" ]\n");
	}
}

void populate_grid_basic(int(*ptr)[3][3])
{
	int num = 1;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
				(*ptr)[i][j] = num;
				num++;
		}
	}
	
	/*
	if (choice == 0)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				(*ptr)[i][j] = num;
				num++;
			}
		}
	}
	else if (choice == 1)
	{
		for (int i = 2; i >= 0; i--)
		{
			for (int j = 2; j >= 0; j--)
			{
				(*ptr)[i][j] = num;
				num++;
			}
		}
	}
	*/
}

