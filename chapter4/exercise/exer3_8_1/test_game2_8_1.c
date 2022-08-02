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
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}