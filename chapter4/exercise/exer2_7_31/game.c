#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

void Initboard(char board[ROW][COL], int row, int col) //元素初始化函数
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
	for (i = 0; i < row-1; i++)
	{
					for (j = 0; j< col - 1; j++)
					{
						printf(" %c |",board[i][j]);
					}
					printf(" %c \n",board[i][j]);
					for (j = 0; j < col - 1; j++)
					{
						printf("---|");
					}
					printf("---\n");

	}
	for (i = row-1; i < row; i++)
	{
		for (j = 0; j < col - 1; j++)
		{
			printf(" %c |", board[i][j]);
		}
		printf(" %c \n", board[i][j]);
	}
}

void playermove(char board[ROW][COL], int row, int col)
{
	int i, j;
	while (1)
	{
		printf("玩家走：\n");
		printf("请输入位置坐标(如：1 3)：\n");
		scanf("%d%d", &i, &j);
		i--; j--;
		if ((i < 3) && (j < 3))
		{
			if (board[i][j] == ' ')
			{
				board[i][j] = '*';
				break;
			}
			else
			{
				printf("输入错误，请重新输入\n");
			}
		}

		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
	


}

void computermove(char board[ROW][COL], int row, int col)
{
	int i, j;
	srand((unsigned int)time(NULL));
	printf("电脑走\n");

	while (1)
	{
		i = rand() % 3;
		j = rand() % 3;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
}

char win_judge(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)//行判断
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][2] != ' ')
		{
			return board[i][0];
		}
	}
	for (j = 0; j < row; j++)//列判断
	{
		if (board[0][j] == board[1][j] && board[0][j] == board[2][j] && board[2][j] != ' ')
		{
			return board[0][j];
		}
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];//正斜判断
	}
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[1][1] != ' ')
	{
		return board[0][2];//反斜判断
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j]==' ')
			{
				return 'g';
			}
		}
	}
	return 'p';
}
