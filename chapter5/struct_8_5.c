#include<stdio.h>
int main()
{
    struct student
    {
        char name[10];
        int age;
        char sex[5];
        char id[10];
    };
    struct student s1={"张三",18,"男","22235"};
    // s1.id="fsdfasdfds";//内容无法直接修改
    printf("%s\n",s1.id);
    // printf("%s",s1->id);//结构体只能通过.访问成员
    struct student* p=&s1;//取地址
    printf("%s\n",(*p).id);//or
    printf("%s\n",p->id);
    
    return 0;
}