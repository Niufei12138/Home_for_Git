#include<stdio.h>
#include<string.h>
int main()
{
    int a[]={0,1,2,3,4};
    char b[]={'a','b','b','b','c'};
    printf("%d\n ",&a[1]-&a[0] );
    printf("%d\n ",&b[3]-&b[0] );//ָ��+-ָ��=������С
    // printf("%d\n ",&b[3]-&a[0] );//��ͬ���͵�ָ�벻����Ӽ�
return 0;
}