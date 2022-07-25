#include <stdio.h>
int main()
{
    int i=1;
    do 
    {
        if(5==i)
       {continue;}//{break;}
        printf("%d——",i);
        i++;
    }//由于是先执行再判断，所以do中的语句至少执行一次
    while (i<=10);
    return 0;
}