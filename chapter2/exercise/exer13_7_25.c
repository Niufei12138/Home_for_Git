#include<stdio.h>
int main()
{
    int i=1;
    int flag=1;
    double sum=0.0;
    for(i=1;i<=100;i++)
    {
        sum+=1.0/(i*flag);
        flag=-flag;
    printf("%lf",sum);
        
    }
    printf("%lf",sum);
    return 0;
}