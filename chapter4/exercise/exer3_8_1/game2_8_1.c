#define _CRT_SECURE_NO_WARNINGS 1
#include"game2_8_1.h"

void initboard1(int board[ROWS][COLS], int rows, int cols,int num)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = num;
		}
	}
}
void initboard2(int board[ROW][COL], int row, int col, int num)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = num;
		}
	}
}

void display(int board[ROW][COL], int row, int col)
{
	int i, j;
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		printf("%d ", i+1);
		for (j = 0; j < col; j++)
		{
			printf("%c ", (board[i][j]+48));
		}
		printf("\n");
	}
}

void display2(int board[ROWS][COLS], int row, int col)
{
	int i, j;
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		printf("%d ", i + 1);
		for (j = 0; j < col; j++)
		{
			printf("%c ", (board[i][j] + 48));
		}
		printf("\n");
	}
}

void get_mine(int board[ROWS][COLS], int rows, int cols, int mine)
{
	srand((unsigned int)time(NULL));
	int i, j;
	int count=0;
	while (count < mine)
	{
		i = rand()%ROW+1;
		j = rand() % ROW+ 1;
		if (board[i][j] == 0)
		{
			board[i][j] = 1;
			count++;
		}
	}
}

void get_count(int basic_mineboard[ROWS][COLS], int count_board[ROW][COL], int rows, int cols, int row, int col)
{
	int i, j,I,J,count;
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			I = i ; J = j ; count = 0;
			for (I=i; I <= i + 2; I++)
			{
				for (J=j; J <= j+ 2; J++)
				{
					count = count + basic_mineboard[I][J];
				}
			}
			count_board[i][j] = count;
		}
	}
}

void play(int basic_mineboard[ROWS][COLS], int count_board[ROW][COL], int display_board[ROW][COL], int rows, int cols, int row, int col)
{
	int count_0 = 0;
	while (1)
	{
		int x, y;
		printf("�������������꣺");
		scanf("%d%d", &x, &y);
		int i, j;
		if (x > 0 && x <= 9 && y > 0 && y <= 9)
		{
			i = x - 1; j = y - 1;
			if (display_board[i][j] == -6)
			{
				if (basic_mineboard[i + 1][j + 1] == 1)
				{
					
					display_board[i][j] = 29;
					display(display_board, ROW, COL);
					printf("��ϲ�㣬���ڵ��Ϲŵ�����\n");
					break;
				}
				else
				{
					open_empty(display_board, count_board, i, j, &count_0);
					count_0++;
					//printf("%d", display_board[i][j]);
					printf("\n");
					system("cls");
					display(display_board, ROW, COL);
					printf("\n");
					if (count_0 == (ROW*COL) - MINE)
					{printf("��ϲ�㣬���Ѿ�ɨ����ȫ�����ˣ����Ǹ�����\n");
					break;
					}
					
				}
			}
			else
			{
				printf("��λ�����ų�������������\n");
			}
		}
		else
		{
			printf("�������겻��ȷ������������\n");
		}
	}
	
}

void open_empty(int display_board[ROW][COL], int count_board[ROW][COL], int i, int j, int* count_0)
{
	if (count_board[i][j] == 0)
	{
		int I, M;
		int J, N;
		int x, y;
		I = i - 1; J = j - 1; M = i + 1; N = j + 1;
		if (I < 0)
		{
			I = 0;
		}
		if (J < 0)
		{
			J = 0;
		}
		if (M>8)
		{
			M = 8;
		}
		if (N>8)
		{
			N = 8;
		}

		for (x = I; x <= M; x++)
		{

			for (y = J; y <= N; y++)
			{

				display_board[x][y] = count_board[x][y];
				(*count_0)++;


			}


		}
	}
	else
	{
		display_board[i][j] = count_board[i][j];
		(*count_0)++;
	}

}
	


void game()
{
	int basic_mineboard[ROWS][COLS] = {0};//�����������������顢������Ϣ�������顢��ӡ��������
	int count_mineboard[ROW][COL] = { 0 };
	int display_mineboard[ROW][COL] = { 0 };
	initboard1(basic_mineboard, ROWS, COLS, 0);//��ʼ��������Ϣ����
	initboard2(count_mineboard, ROW, COL, 0);
	initboard2(display_mineboard, ROW, COL, -6);
	system("cls");
	display(display_mineboard, ROW, COL);    //��ӡ��Ӧ��ASICC������ţ����ӡ�������룱������

	get_mine(basic_mineboard, ROWS, COLS, MINE);//��������ض�����(MINE)

	//display2(basic_mineboard, ROWS, COLS);    //��ӡ��Ӧ��ASICC������ţ����ӡ�������룱������

	get_count(basic_mineboard, count_mineboard, ROWS, COLS, ROW, COL);//���ÿ��λ�þŹ����ڵ�����

	//display(count_mineboard, ROW, COL);    //��ӡ��Ӧ��ASICC������ţ����ӡ�������룱������

	play(basic_mineboard, count_mineboard,display_mineboard, ROWS, COLS, ROW, COL);//��Ҳ�������
}
