#include<stdio.h>
struct stu            //struct �ṹ��ؼ���
{               //stu �ṹ���ǩ  struct stu �ṹ������
    char name[10];
    short age;
    char tele[12];
    char sex[5];
}s1,s2,s3;//��������ȫ�ֱ���   
// int main()
// {
//     struct stu s;//����һ��ȫ�ֱ���
//     return 0;
// }
typedef struct stu Stu;
typedef struct STG           
{               
    char str[10];
    short age;
    struct stu s;
    char *p;
}Stg;       //��������ת��

// int main()
// {
//     char arr[]="δ֪";
//     char arr2[]={'δ','֪'};
//     Stg g={"���",32,{"�滨",15,"1544544",'m'},&arr[0]};//�ṹ��Ƕ��
//     printf("%s",g.p);
//     return 0;
// }
void print1 (Stu sz);
void print2 (Stu* sz);

int main()
{
    Stu sq={"����",15,"1888888888","m"};
    // printf("%s\n",sq.tele);
    print1(sq);
    printf("\n");
    print2(&sq);
    return 0;
}
void print1 (Stu sz)
{
    printf("������ %s\n",sz.name);
    printf("���䣺 %d\n",sz.age);
    printf("�绰�� %s\n",sz.tele);
    printf("�Ա� %s\n",sz.sex);
}
void print2 (Stu* sz)//�����print1�����ö��⿪�ٿռ��
{       //�β�ʹ�ã����ṹ���ǰ�ܴ��ʱ�򣬻�����ռ��˷�
    printf("������ %s\n",sz->name);
    printf("���䣺 %d\n",sz->age);
    printf("�绰�� %s\n",sz->tele);
    printf("�Ա� %s\n",sz->sex);
}

