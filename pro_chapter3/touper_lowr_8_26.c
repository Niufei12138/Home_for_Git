#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch='P';
    char arr[]="abcdef";
    ch=tolower(ch);
    printf("%c\n",ch);
    printf("%c\n",toupper('A'));
    // printf("%s\n",toupper(arr));//不可以
    // 只能对单个字符进行大小写转换
    printf("%d\n",toupper(1));
    
    return 0;
}