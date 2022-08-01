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
	char board [ROW] [COL] = {'a','b','c','d','e'};//此时数组元素全为空，接下类进行初始化，将元素转化为空格
	Initboard(board, ROW, COL);//初始化棋盘
	Displayboard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//输赢判断
		if (win_judge(board, ROW, COL) == '*')
		{
			printf("\n——》你赢了《——\n\n");
				break;
		}
		if (win_judge(board, ROW, COL) == 'p')
		{
			printf("\n——》平局《——\n\n");
			break;
		}


		//电脑下棋
		computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		win_judge(board, ROW, COL);
		if (win_judge(board, ROW, COL) == '#')
		{
			printf("\n——》你输了《——\n\n");
			break;
		}


	}
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