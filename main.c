#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

// gcc compile command is "gcc main.c functions.c -o sudoku.exe"

int main()
{
	/* Setting a random seed for time every time the program opens and giving a value for 
	
	srand(time(NULL));
	int choice = rand() % 4;




	/* Declaration and initialization of both grids and pointers */

	int grid[9][9] = { 0 };
	int (*real_grid_ptr)[9][9] = &grid;

	int temp_grid[3][3] = { 0 };
	int (*temp_grid_ptr)[3][3] = &temp_grid;




	/* Functions to be called which all serve their various purposes */

	populate_grid_basic(temp_grid_ptr);
	print_grid(temp_grid_ptr);
	rotate_grid(temp_grid_ptr);
	// shuffle_grid(temp_grid_ptr, real_grid_ptr);




	/* Placeholder while I try to debug Sleep() in Windows.h and why it is not working for me */

	int place;
	scanf("%d", &place);

	return 0;
}