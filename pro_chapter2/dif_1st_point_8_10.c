#include<stdio.h>
int main()
{
    char arr2[]="abcdef";
    char arr1[]="abcdef";
    const char* p1="abcdef";
    const char* p2="abcdef";//加入const保护常量字符串
    printf("%p\n%p\n",arr1,arr2);
    if(arr1==arr2)
    {
        printf("arr1==arr2:");
        printf("same\n");
    }
    else
    {
        printf("arr1==arr2:");
        printf("different\n");
    }
    printf("%p\n%p\n",p1,p2);
    if(p1==p2)
    {
        printf("p1=p2:");
        printf("same\n");
    }
    else
    {
        printf("p1=p2:");
        printf("different\n");
    }
    return 0;
}