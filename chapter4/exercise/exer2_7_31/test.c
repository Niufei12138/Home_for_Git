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
	char board [ROW] [COL] = {0};//��ʱ����Ԫ��ȫΪ�գ���������г�ʼ������Ԫ��ת��Ϊ�ո�
	Initboard(board, ROW, COL);//��ʼ������
	Displayboard(board, ROW, COL);
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