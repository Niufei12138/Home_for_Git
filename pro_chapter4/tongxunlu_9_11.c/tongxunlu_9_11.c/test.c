#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu()
{
	printf("****************************************\n");
	printf("*******1.add         2.del     ********\n");
	printf("*******3.search       4.modify *********\n");
	printf("*******5.show         6.sort   *********\n");
	printf("*******0.exit                  *********\n");
	printf("****************************************\n");
	printf("****************************************\n");
}
int main()
{
	int input = 0;
	struct contect con;//���1000��Ϣ��ͨѶ¼
	//��ʼ��ͨѶ¼
	initcotact(&con);
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			addcontact(&con);
			break;
		case DEL:
			delcontact(&con);
			break;
		case SEARCH:
			searcontact(&con);
			break;
		case MODIFY:
			modifycontact(&con);
			break;
		case SHOW:
			showcontact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}
	while (input);
	return 0;
}