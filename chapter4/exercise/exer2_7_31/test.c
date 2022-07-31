#define _CRT_SECURE_NO_WARNINGS 1
//测试三子棋游戏
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("**************************************\n");
	printf("*****    1.paly       0.exit    ******\n");
	printf("**************************************\n");
}
void game()  //生成棋盘
{
	char board [ROW] [COL] = {0};//此时数组元素全为空，接下类进行初始化，将元素转化为空格
	Initboard(board, ROW, COL);//初始化棋盘
	Displayboard(board, ROW, COL);
}

void test()
{
	int input;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}