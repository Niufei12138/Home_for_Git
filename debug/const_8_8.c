#include<stdio.h>
int main()
{
    const int a=10;
    // const int* p= &a;//const 表示不能通过*p修改a
    // int * const p=&a  //const表示不能修改p指针指向的地址
    const int* const p=&a;
    printf("%d",*p);
    return 0;
}