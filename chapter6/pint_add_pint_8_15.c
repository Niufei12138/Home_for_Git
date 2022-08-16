#include<stdio.h>
#include<string.h>
int main()
{
    int a[]={0,1,2,3,4};
    char b[]={'a','b','b','b','c'};
    printf("%d\n ",&a[1]-&a[0] );
    printf("%d\n ",&b[3]-&b[0] );//指针+-指针=整步大小
    // printf("%d\n ",&b[3]-&a[0] );//不同类型的指针不能相加减
return 0;
}