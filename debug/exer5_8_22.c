#include<stdio.h>
#include<string.h>
int is_lest_move(char arr1[],char arr2[])
{
    // �����ַ���׷�Ӹ�ǰ�ַ������������strcat�������������Լ�׷���Լ�
    // strcat(arr1,arr1)//
    int len1=strlen(arr1);
    int len2=strlen(arr2);
    if(len1!=len2)
    {
        return 0;
    }
    strncat(arr1,arr2,len1);
    // ��arr1������û��arr2�ַ���,���ص���һ����ַ
    char *ret=strstr(arr1,arr2);
    if(ret=NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    char arr1[30]="efd";
    char arr2[]="def";
    int ret=is_lest_move(arr1,arr2);
    if(ret==1)
    {
        printf("Yes");
    }
    else 
        printf("No");
    return 0;
}