// 用指针差实现字符串长度计算
#include<stdio.h>
#include<string.h>
int my_strlen(char* str)
{
    char* start =str;
    char* end1 =str;
    while (*end1 !='\0')
    {
        end1++;
    }
    return end1-start;
}
int main()
{
    char arr[]="abc123";
    int len=my_strlen(arr);
    printf("%d\n",len);
    printf("%d\n",strlen(arr));
    return 0;
}