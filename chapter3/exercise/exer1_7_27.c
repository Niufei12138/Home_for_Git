#include<stdio.h>
#include<math.h>
int is_prime(int a)
{
    int n;
    // for (n=2;n<=sqrt(a);n++)//这种方法有一个缺陷就是会判断3不是素数
    // {
    //     if(a%n==0)
    //     {return 0;
    //     break;}
    //     else if (n>(sqrt(a)-1))
    //     {
    //         return 1;
    //     }
        
    // }
    //常规判断
    // for ( n = 2; n < a; n++)
    // {
    //     if(a%n==0)  
    //     {return 0;}
    //     if(n==(a-1))
    //     {return 1;}
    // }
    
}
int main()
{
    int i;
    printf("请输入需要判断的数：");
    scanf("%d",&i);
    if (is_prime(i)==1)
    {printf("%d是素数",i);}
    else 
    {printf("%d是非素数",i);}
    return 0;
}