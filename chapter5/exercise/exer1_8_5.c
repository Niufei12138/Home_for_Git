#include<stdio.h>//���ܴ�����ʱ��������������������ʵ���������Ľ�����
//��1������Ӽ�
// int main()
// {
//     int a=3;
//     int b=5;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("%d\n%d",a,b);
//     return 0;
// }

// ��2�����
int main()
{
    int a=3;//0000011
    int b=5;//0000101
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d\n%d",a,b);

    return 0;
}