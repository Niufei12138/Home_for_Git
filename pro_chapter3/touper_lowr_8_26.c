#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch='P';
    char arr[]="abcdef";
    ch=tolower(ch);
    printf("%c\n",ch);
    printf("%c\n",toupper('A'));
    // printf("%s\n",toupper(arr));//������
    // ֻ�ܶԵ����ַ����д�Сдת��
    printf("%d\n",toupper(1));
    
    return 0;
}