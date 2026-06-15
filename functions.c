#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
}



void print_grid_basic(int(*ptr)[3][3])
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



void print_grid_full(int(*ptr)[9][9])
{
	for (int i = 0; i < 9; i++)
	{
		printf("[  ");
		for (int j = 0; j < 9; j++)
		{
			printf("%d  ", (*ptr)[i][j]);
		}
		printf("]\n");
	}
}



void rotate_grid(int(*ptr)[3][3])
{
	
	srand(time(NULL));
	
	
	int rotationDirection = (rand() % 2) + 1;
	int numTimes = rand() % 4;
	
	
	if (numTimes == 0)
		return;

	int temp1, temp2, temp3, temp4;
	
	
	
	if (rotationDirection == 1)		// Counterclockwise rotation
	{
		for (int i = 0; i < numTimes; i++)
		{
			temp1 = (*ptr)[0][0];
			temp2 = (*ptr)[1][0];
			temp3 = (*ptr)[2][0];
			temp4 = (*ptr)[2][1];

			(*ptr)[1][0] = (*ptr)[0][1];
			(*ptr)[0][0] = (*ptr)[0][2];
			(*ptr)[0][1] = (*ptr)[1][2];
			(*ptr)[0][2] = (*ptr)[2][2];

			(*ptr)[2][0] = temp1;
			(*ptr)[2][1] = temp2;
			(*ptr)[2][2] = temp3;
			(*ptr)[1][2] = temp4;
		}
			
	}
	
	else if (rotationDirection == 2)		// Clockwise rotation - note that they use the same set of slots to rotate
	{
		for (int i = 0; i < numTimes; i++)
		{
			temp1 = (*ptr)[0][0];
			temp2 = (*ptr)[1][0];
			temp3 = (*ptr)[2][0];
			temp4 = (*ptr)[2][1];
			
			(*ptr)[2][0] = (*ptr)[2][2];
			(*ptr)[2][1] = (*ptr)[1][2];
			(*ptr)[2][2] = (*ptr)[0][2];
			(*ptr)[1][2] = (*ptr)[0][1];
			
			(*ptr)[0][2] = temp1;
			(*ptr)[0][1] = temp2;
			(*ptr)[0][0] = temp3;
			(*ptr)[1][0] = temp4;
		}
	}
}



void shuffle_grid_rows(int(* ptr)[3][3])
{
	int temp1, temp2, temp3;
	
	temp1 = (*ptr)[0][0];
	temp2 = (*ptr)[0][1];
	temp3 = (*ptr)[0][2];
	
	(*ptr)[0][0] = (*ptr)[1][0];
	(*ptr)[0][1] = (*ptr)[1][1];
	(*ptr)[0][2] = (*ptr)[1][2];
	
	(*ptr)[1][0] = (*ptr)[2][0];
	(*ptr)[1][1] = (*ptr)[2][1];
	(*ptr)[1][2] = (*ptr)[2][2];
	
	(*ptr)[2][0] = temp1;
	(*ptr)[2][1] = temp2;
	(*ptr)[2][2] = temp3;
}

void shuffle_grid_columns(int(*ptr)[3][3])
{
	int temp1, temp2, temp3;
	
	temp1 = (*ptr)[0][0];
	temp2 = (*ptr)[1][0];
	temp3 = (*ptr)[2][0];
	
	(*ptr)[0][0] = (*ptr)[0][1];
	(*ptr)[1][0] = (*ptr)[1][1];
	(*ptr)[2][0] = (*ptr)[2][1];
	
	(*ptr)[0][1] = (*ptr)[0][2];
	(*ptr)[1][1] = (*ptr)[1][2];
	(*ptr)[2][1] = (*ptr)[2][2];
	
	(*ptr)[0][2] = temp1;
	(*ptr)[1][2] = temp2;
	(*ptr)[2][2] = temp3;
}


void populate_grid_full(int(*fake_ptr)[3][3], int(*real_ptr)[9][9])
{
	
	int i2 = 0;
	int j2 = 0;
	int gridCount = 0;
	int numsFilled = 0;
	int numsRemoved = 0;
	
	while (numsFilled < 81)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				(*real_ptr)[i + i2][j + j2] = (*fake_ptr)[i][j];
				numsFilled++;
			}
		}
		
		shuffle_grid_rows(fake_ptr);
		j2 += 3;
		gridCount++;
		
		if (gridCount < 2)
		{
			gridCount = 0;
			i2 += 3;
			shuffle_grid_rows(fake_ptr);
			shuffle_grid_columns(fake_ptr);
			j2 = 0;
		}
	}
	
}

/*
void remove_some_squares()
*/