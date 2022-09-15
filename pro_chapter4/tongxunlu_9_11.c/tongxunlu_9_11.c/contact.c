#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void initcotact(struct contect* con)
{
	memset(con->peo, 0, sizeof(con->peo));
	con->size = 0;
}

void addcontact(struct contect *con)
{
	if (con->size >= max)
	{
		printf("容量已满，无法存储\n");
	}
	else
	{
		printf("请输入姓名：\n");
		scanf("%s", con->peo[con->size].name);
		printf("请输入年龄：\n");
		scanf("%d", &(con->peo[con->size].age));
		printf("请输入性别：\n");
		scanf("%s", con->peo[con->size].sex);
		printf("请输入电话：\n");
		scanf("%s", con->peo[con->size].tele);
		printf("请输入地址：\n");
		scanf("%s", con->peo[con->size].addr);
		con->size++;
		printf("已输入\n");
	}
}

void showcontact(struct contect *con)
{
	if (con->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i;
		printf("%-6s\t%-20s\t%-4s\t%-4s\t%-12s\t%-20s\n", "序数","姓名", "性别", "年龄", "电话", "地址");
		for (i = 0; i < con->size; i++)
		{
			printf("%-6d\t%-20s\t%-4s\t%-4d\t%-12s\t%-20s\n", 
			i+1,
			con->peo[i].name, 
			con->peo[i].sex, 
			con->peo[i].age, 
			con->peo[i].tele, 
			con->peo[i].addr);
		}


	}
}
static int findbyname(const struct contect *con, char name[max_name])
{
	int i;
	for (i = 0; i < con->size; i++)
	{
		if (0 == strcmp(name, con->peo[i].name))
		{
			return i;
		}
	}
	return -1;
}

void delcontact(struct contect *con)
{
	char name[max_name];
	printf("请输入删除人的名字：");
	scanf("%s", name);
	//查找信息位置
	int i = findbyname(con, name);
	
	if (i == -1)
	{
		printf("无该人信息\n");
	}
	else
	{
		do
		{
			con->peo[i] = con->peo[i + 1];
			i++;
		} while (i<con->size);
		con->size--;
		printf("已删除\n");
	}
}
void searcontact(const struct contect *con)
{
	char name[max_name];
	printf("请输入查找用户的姓名：\n");
	scanf("%s", name);
	int i=findbyname(con, name);
	printf("%-6s\t%-20s\t%-4s\t%-4s\t%-12s\t%-20s\n", "序数", "姓名", "性别", "年龄", "电话", "地址");
	printf("%-6d\t%-20s\t%-4s\t%-4d\t%-12s\t%-20s\n",
			i + 1,
			con->peo[i].name,
			con->peo[i].sex,
			con->peo[i].age,
			con->peo[i].tele,
			con->peo[i].addr);
}
void modifycontact(struct contect *con)
{
	char name[max_name];
	printf("请输入修改人姓名：\n");
	scanf("%s", name);
	int i=findbyname(con, name);
	if (-1 == i)
	{
		printf("无该信息\n");
	}
	else
	{
	printf("请输入姓名：\n");
	scanf("%s", con->peo[i].name);
	printf("请输入年龄：\n");
	scanf("%d", &(con->peo[i].age));
	printf("请输入性别：\n");
	scanf("%s", con->peo[i].sex);
	printf("请输入电话：\n");
	scanf("%s", con->peo[i].tele);
	printf("请输入地址：\n");
	scanf("%s", con->peo[i].addr);
	printf("已修改\n");
	}
}




