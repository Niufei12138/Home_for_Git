#include <stdio.h>
int main()
{
    int a=0;
    while (a<20000)
    {
        a++;
        if (a%2==0)
            {printf("打印次数: %d",a);}
        else
            {printf("打印次数: %d\n",a);}

    }
    
    return 0;
}