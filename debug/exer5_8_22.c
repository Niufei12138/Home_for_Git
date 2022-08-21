#include<stdio.h>
#include<string.h>
int is_lest_move(char arr1[],char arr2[])
{
    // 将后字符串追加给前字符串，但是这个strcat函数不适用于自己追加自己
    // strcat(arr1,arr1)//
    int len1=strlen(arr1);
    int len2=strlen(arr2);
    if(len1!=len2)
    {
        return 0;
    }
    strncat(arr1,arr2,len1);
    // 在arr1中找有没有arr2字符串,返回的是一个地址
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