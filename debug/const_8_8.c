#include<stdio.h>
int main()
{
    const int a=10;
    // const int* p= &a;//const ��ʾ����ͨ��*p�޸�a
    // int * const p=&a  //const��ʾ�����޸�pָ��ָ��ĵ�ַ
    const int* const p=&a;
    printf("%d",*p);
    return 0;
}