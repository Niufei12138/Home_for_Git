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
    struct student s1={"����",18,"��","22235"};
    // s1.id="fsdfasdfds";//�����޷�ֱ���޸�
    printf("%s\n",s1.id);
    // printf("%s",s1->id);//�ṹ��ֻ��ͨ��.���ʳ�Ա
    struct student* p=&s1;//ȡ��ַ
    printf("%s\n",(*p).id);//or
    printf("%s\n",p->id);
    
    return 0;
}