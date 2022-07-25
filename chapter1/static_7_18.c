#include <stdio.h>
void test()
{
    static int a =1;//a变成了静态局部变量
    a+=1;
    printf("a=%d\n",a);
}
int main()
{
    int i=0;
    while (i<5)
    {
        test();
        i+=1;
    }
    
    return 0;
}