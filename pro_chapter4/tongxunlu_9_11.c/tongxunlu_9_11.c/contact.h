#include<stdio.h>
#include <string.h>

#define max 1000
#define max_name 20
#define max_sex 5
#define max_tele 13
#define max_addr 40
//枚举通讯录命令
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
	char tele[max_tele];//注意电话号码格式，最多不超过11位
	char addr[max_addr];
};
//通讯录类型
struct contect
{
	struct PeoInfo peo[max];
	int size;
};
//通讯录初始化
void initcotact( struct contect *con);
//增加通讯录信息
void addcontact(struct contect *con);
//显示通讯录
void showcontact(struct contect *con);
//删除通讯录信息
void delcontact(struct contect *con);
//查找通讯录信息
void searcontact(const struct contect *con);
//修改通讯录信息
void modifycontact(struct contect *con);


