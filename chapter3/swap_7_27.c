#include <stdio.h>//数值交换
//该种方法无法实现
// void swap(int a,int b)
// {int tmp;
// tmp=a;
// a=b;
// b=tmp;}
// int main()
// {
//     int a=44;
//     int b=98;
//     swap(a,b);
//     printf("a=%db=%d",a,b);
//     return 0;
// }

// 使用地址进行换值操作能实现
void swap(int* a,int* b)
{
    int tem;
    tem=*a;//解引用操作
    *a=*b;
    *b=tem;
}
int main()
{
    int a=44;
    int b=98;
    int* pa=&a;//pa指针变量
    int* pb=&b;
    swap(&a,&b);
    printf("a=%d\nb=%d",a,b);
    return 0;
}
