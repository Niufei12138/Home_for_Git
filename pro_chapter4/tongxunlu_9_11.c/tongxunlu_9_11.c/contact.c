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
		printf("�����������޷��洢\n");
	}
	else
	{
		printf("������������\n");
		scanf("%s", con->peo[con->size].name);
		printf("���������䣺\n");
		scanf("%d", &(con->peo[con->size].age));
		printf("�������Ա�\n");
		scanf("%s", con->peo[con->size].sex);
		printf("������绰��\n");
		scanf("%s", con->peo[con->size].tele);
		printf("�������ַ��\n");
		scanf("%s", con->peo[con->size].addr);
		con->size++;
		printf("������\n");
	}
}

void showcontact(struct contect *con)
{
	if (con->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i;
		printf("%-6s\t%-20s\t%-4s\t%-4s\t%-12s\t%-20s\n", "����","����", "�Ա�", "����", "�绰", "��ַ");
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
	printf("������ɾ���˵����֣�");
	scanf("%s", name);
	//������Ϣλ��
	int i = findbyname(con, name);
	
	if (i == -1)
	{
		printf("�޸�����Ϣ\n");
	}
	else
	{
		do
		{
			con->peo[i] = con->peo[i + 1];
			i++;
		} while (i<con->size);
		con->size--;
		printf("��ɾ��\n");
	}
}
void searcontact(const struct contect *con)
{
	char name[max_name];
	printf("����������û���������\n");
	scanf("%s", name);
	int i=findbyname(con, name);
	printf("%-6s\t%-20s\t%-4s\t%-4s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "����", "�绰", "��ַ");
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
	printf("�������޸���������\n");
	scanf("%s", name);
	int i=findbyname(con, name);
	if (-1 == i)
	{
		printf("�޸���Ϣ\n");
	}
	else
	{
	printf("������������\n");
	scanf("%s", con->peo[i].name);
	printf("���������䣺\n");
	scanf("%d", &(con->peo[i].age));
	printf("�������Ա�\n");
	scanf("%s", con->peo[i].sex);
	printf("������绰��\n");
	scanf("%s", con->peo[i].tele);
	printf("�������ַ��\n");
	scanf("%s", con->peo[i].addr);
	printf("���޸�\n");
	}
}




