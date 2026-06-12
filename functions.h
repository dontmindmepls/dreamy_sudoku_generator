#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void print_grid_basic(int (*temp_grid_ptr)[3][3]);
void populate_grid_basic(int(*temp_grid_ptr)[3][3]);
void rotate_grid(int(*temp_grid_ptr)[3][3]);
void shuffle_grid_rows(int(*temp_grid_ptr)[3][3]);
void shuffle_grid_columns(int(*temp_grid_ptr)[3][3]);

// void shuffle_grid(int(*temp_grid_ptr)[3][3], int(*real_grid_ptr)[9][9]);

#endif