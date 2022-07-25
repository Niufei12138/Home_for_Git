// 前置、后置--
// 前置、后置++
#include<stdio.h>
int main()
{
    int a=10;
    int aa=10;
    int b=a++;//后置++，先使用，再++
    int c=++aa;//前置++，先++，再使用
    printf("b=a++=%d a=%d\n",b,a);
    printf("c=++aa=%d aa=%d\n",c,aa);
    return 0;
}