#define _CRT_SECURE_NO_WARNINGS 1
//������������Ϸ
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("**************************************\n");
	printf("*****    1.paly       0.exit    ******\n");
	printf("**************************************\n");
}
void game()  //��������
{
	char board [ROW] [COL] = {'a','b','c','d','e'};//��ʱ����Ԫ��ȫΪ�գ���������г�ʼ������Ԫ��ת��Ϊ�ո�
	Initboard(board, ROW, COL);//��ʼ������
	Displayboard(board, ROW, COL);
	while (1)
	{
		//�������
		playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//��Ӯ�ж�
		if (win_judge(board, ROW, COL) == '*')
		{
			printf("\n��������Ӯ�ˡ�����\n\n");
				break;
		}
		if (win_judge(board, ROW, COL) == 'p')
		{
			printf("\n������ƽ�֡�����\n\n");
			break;
		}


		//��������
		computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		win_judge(board, ROW, COL);
		if (win_judge(board, ROW, COL) == '#')
		{
			printf("\n�����������ˡ�����\n\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�������");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}