#include<stdio.h>
int main()
{
    int *p=NULL;//整形指针
    char *pc=NULL;//字符指针
    int (*p)[10]=NULL;// 数组指针，指向数组的指针

    char*arr[5];
    char* (*pa)[5]=&arr;
    //pa是存放五个char*类型指针的数组的指针
    int arr2[10]={0};
    int (*arr2)[10]=&arr2;
    return 0;
}