// ��д��������������ʱ���������ַ����ĳ��ȡ�
#include<stdio.h>
// ���淽����ʹ����ʱ����
// int string_lenth(char* arr)
// {
//     int i=0;
//     while (*arr!='\0')
//     {i++;
//     arr++;//ǰһ��Ԫ�ص�ַ++���ں�һ��Ԫ�ص�ַ
//     }
//     return i;
// int main()
// {
//     char arr[]="abc";
//     int lenth=string_lenth(arr);
//     printf("%d",lenth);
//     return 0;
// }

//�ݹ鷽��
int lenth_lenth(char* arr)
{
    if(*arr!='\0')
    {
        return 1+lenth_lenth(arr+1);
    }
    else
        return 0;
}
int main()
{
    char arr[]="abcaaaaa";
    int lenth=lenth_lenth(arr);
    printf("%d",lenth);
    return 0;
}