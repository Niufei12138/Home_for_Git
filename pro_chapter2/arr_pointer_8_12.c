#include<stdio.h>
int main()
{
    int *p=NULL;//����ָ��
    char *pc=NULL;//�ַ�ָ��
    int (*p)[10]=NULL;// ����ָ�룬ָ�������ָ��

    char*arr[5];
    char* (*pa)[5]=&arr;
    //pa�Ǵ�����char*����ָ��������ָ��
    int arr2[10]={0};
    int (*arr2)[10]=&arr2;
    return 0;
}