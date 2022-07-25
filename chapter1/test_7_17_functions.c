#include <stdio.h>
int Add(int num1,int num2)
{
    int z=num1+num2;
    return z;
}
int main()
{
    int sum=0;
    int num1=0;
    int num2=0;
    scanf("%d%d",&num1,&num2);
    sum=Add(num1,num2);
    printf("%d\n",sum);
    return 0;
}