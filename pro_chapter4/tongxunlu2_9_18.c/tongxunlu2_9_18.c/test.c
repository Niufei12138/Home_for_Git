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
	struct contect *con=NULL;//���1000��Ϣ��ͨѶ¼
	//��ʼ��ͨѶ¼
	con = initcotact();
	struct contect *con_tem = NULL;
	do
	{

		menu();
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			con_tem = (struct contect *)realloc(con, sizeof(struct contect) + (con->size + 3) * sizeof(struct PeoInfo));
			if (con_tem != NULL)
			{
				con = con_tem;
				con_tem = NULL;
			}
			addcontact(con);
			break;
		case DEL:
			con_tem = (struct contect *)realloc(con, sizeof(struct contect) + (con->size + 3) * sizeof(struct PeoInfo));
			if (con_tem != NULL)
			{
				con = con_tem;
				con_tem = NULL;
			}
			delcontact(con);
			break;
		case SEARCH:
			searcontact(con);
			break;
		case MODIFY:
			modifycontact(con);
			break;
		case SHOW:
			showcontact(con);
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