#include <stdio.h>
char* my_strcpy(char* dest,const char* src)
{
    ;
}
int add(int x,int y)
{
    return x+y;
}
int main()
{
    // int a=0;
    // int*p=&a;
    // int*arr[10]={p};
    // int*(*pa)[10]=&arr;
    // int(*p_add)(int,int)=add;
    // printf("%d\n",p_add(18,8));
    // int(*parr[5])(int,int)={add};
    // printf("%d\n",parr[0](18,8));
    // int(*(*p_parr)[5])(int,int)=&parr;
    // printf("%d\n",(*p_parr)[0](18,8));

    int a=0;  //һ������
    int*p=&a;  //ָ�������ַ��ָ��
    int*arr[10]={p};  //ָ�����顪�����ָ���ָ������
    int*(*pa)[10]=&arr;
    // ��ָ�룩����ָ�롪��ָ��ָ�������ָ��
    int(*p_add)(int,int)=add;
    // ����ָ�롪��ָ������ַ��ָ��
    int(*parr[5])(int,int)={add};
    // ����ָ������
    int(*(*p_parr)[5])(int,int)=&parr;
    // ָ����ָ�������ָ��

    return 0;
}
