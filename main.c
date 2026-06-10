#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

// gcc compile command is "gcc main.c functions.c -o sudoku.exe"

int main()
{
	int grid[3][3] = { 0 };
	int (*grid_ptr)[3][3] = &grid;

	populate_grid_basic(grid_ptr);
	print_grid(grid_ptr);

	int place;

	scanf("%d", &place);

	return 0;
}