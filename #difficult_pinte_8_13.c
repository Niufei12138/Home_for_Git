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

    int a=0;  //一个变量
    int*p=&a;  //指向变量地址的指针
    int*arr[10]={p};  //指针数组——存放指针的指针数组
    int*(*pa)[10]=&arr;
    // （指针）数组指针——指向指针数组的指针
    int(*p_add)(int,int)=add;
    // 函数指针——指向函数地址的指针
    int(*parr[5])(int,int)={add};
    // 函数指针数组
    int(*(*p_parr)[5])(int,int)=&parr;
    // 指向函数指针数组的指针

    return 0;
}
