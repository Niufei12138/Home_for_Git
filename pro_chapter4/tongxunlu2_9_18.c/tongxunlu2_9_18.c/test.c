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
	struct contect *con=NULL;//存放1000信息的通讯录
	//初始化通讯录
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
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}
	while (input);
	return 0;
}