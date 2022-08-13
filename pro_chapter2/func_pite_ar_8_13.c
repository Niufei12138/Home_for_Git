#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int main()
{
    int(*func_arr[])(int,int)={add,sub,mul,div};
    int i=0;
    for ( i = 0; i < 4; i++)
    {
        printf("%d\n",func_arr[i](2,3));
    }
    return 0;
}
// 写指针和数组存放my_strcpy的地址
char* my_strcpy(char* dest,const char* src)
{
    ;
}
int main()
{
    char*(*pf)(char*,const char*)=my_strcpy;
    char*(*pfarr[4])(char*,const char*)={my_strcpy,my_strcpy,my_strcpy,my_strcpy};

}