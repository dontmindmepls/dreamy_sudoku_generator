#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "functions.h"

// gcc compile command is "gcc main.c functions.c -o sudoku.exe"
// surprisingly fast compile on my bad laptop lol

int main()
{
	
	/* Declaration and initialization of both grids and pointers */

	int grid[9][9] = { 0 };
	int (*real_grid_ptr)[9][9] = &grid;

	int temp_grid[3][3] = { 0 };
	int (*temp_grid_ptr)[3][3] = &temp_grid;




	/* Functions to be called which all serve their various purposes */

	populate_grid_basic(temp_grid_ptr);
	
	rotate_grid(temp_grid_ptr);
	
	shuffle_grid_rows(temp_grid_ptr);
	
	shuffle_grid_columns(temp_grid_ptr);
	
	print_grid_basic(temp_grid_ptr);
	
	printf("\n");
	
	populate_grid_full(temp_grid_ptr, real_grid_ptr);
	
	print_grid_full(real_grid_ptr);




	/* Waiting to end the program */

	Sleep(10000);

	exit(0);
}