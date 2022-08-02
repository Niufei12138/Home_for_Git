#include<stdio.h>
#define ROW 9
#define COL 9
#define COLS COL+2
#define ROWS ROW+2
#define MINE 9
#include<time.h>
#include<stdlib.h>




void game();
void initboard1(int board[ROWS][COLS], int rows, int cols,int num);
void initboard2(int board[ROW][COL], int row, int col, int num);

void display(int board[ROW][COL], int row, int col);
void get_mine(int board[ROWS][COLS], int rows, int cols, int mine);
void display2(int board[ROWS][COLS], int row, int col);

void get_count(int basic_mineboard[ROWS][COLS], int count_board[ROW][COL], int rows, int cols, int row, int col);

void play(int basic_mineboard[ROWS][COLS], int count_board[ROW][COL], int display_board[ROW][COL],int rows, int cols, int row, int col);
