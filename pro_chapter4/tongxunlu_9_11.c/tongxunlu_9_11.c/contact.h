#include<stdio.h>
#include <string.h>

#define max 1000
#define max_name 20
#define max_sex 5
#define max_tele 13
#define max_addr 40
//ö��ͨѶ¼����
enum options
{
	EXIT=0,
	ADD=1,
	DEL=2,
	SEARCH=3,
	MODIFY=4,
	SHOW=5,
	SORT=6
};
struct PeoInfo
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];//ע��绰�����ʽ����಻����11λ
	char addr[max_addr];
};
//ͨѶ¼����
struct contect
{
	struct PeoInfo peo[max];
	int size;
};
//ͨѶ¼��ʼ��
void initcotact( struct contect *con);
//����ͨѶ¼��Ϣ
void addcontact(struct contect *con);
//��ʾͨѶ¼
void showcontact(struct contect *con);
//ɾ��ͨѶ¼��Ϣ
void delcontact(struct contect *con);
//����ͨѶ¼��Ϣ
void searcontact(const struct contect *con);
//�޸�ͨѶ¼��Ϣ
void modifycontact(struct contect *con);


