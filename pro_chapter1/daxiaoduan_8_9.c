//�жϼ������С��
// ����ʵ�֣�����1��С�ˣ�0�����
#include<stdio.h>

// ʵ��1
// int check_keys()//����1��С�ˣ�0�����
// {
//         int a=1;
//     char *p=(char*) &a;
//     if((*p)==1)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }

// �Ż�2�����Ż�����
int check_keys()
{
    int a=1;
    return *(char*)(&a);//��char*����int a�ĵ�һ���ֽ�
}
int main()
{
    int ret=check_keys();
    if(ret==1)
    {
        printf("С��");
    }
    else
    {
        printf("���");
    }
    return 0;
}