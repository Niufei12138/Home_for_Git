#define _CRT_SECURE_NO_WARNINGS 1
#include"game2_8_1.h"

void menu()
{
	printf("*******************************************\n");
	printf("************    1.play       **************\n");
	printf("************    0.exit       **************\n");
	printf("*******************************************\n");
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
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}