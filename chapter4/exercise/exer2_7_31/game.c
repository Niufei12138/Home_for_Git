#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
#include <stdio.h>
void Initboard(char board[ROW][COL], int row, int col) //Ԫ�س�ʼ������
{
	int i = 0;
	int j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}

	}
}

void Displayboard(char board[ROW][COL], int row, int col)
{
	int i;
	int j;
	int tem;
	for (i = 0; i < row-1; i++)
	{
					for (tem = 0; tem < col - 1; tem++)
					{
						printf("   |");
					}
					printf("   \n");
					for (tem = 0; tem < col - 1; tem++)
					{
						printf("---|");
					}
					printf("---\n");

	}
}