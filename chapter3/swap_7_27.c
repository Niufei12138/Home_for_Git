#include <stdio.h>//��ֵ����
//���ַ����޷�ʵ��
// void swap(int a,int b)
// {int tmp;
// tmp=a;
// a=b;
// b=tmp;}
// int main()
// {
//     int a=44;
//     int b=98;
//     swap(a,b);
//     printf("a=%db=%d",a,b);
//     return 0;
// }

// ʹ�õ�ַ���л�ֵ������ʵ��
void swap(int* a,int* b)
{
    int tem;
    tem=*a;//�����ò���
    *a=*b;
    *b=tem;
}
int main()
{
    int a=44;
    int b=98;
    int* pa=&a;//paָ�����
    int* pb=&b;
    swap(&a,&b);
    printf("a=%d\nb=%d",a,b);
    return 0;
}
