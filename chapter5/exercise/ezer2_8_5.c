// 编写代码实现：求一个整数存储在内存中的二进制中1的个数。(补码中有几个1)
// #include<stdio.h>
// int main()
// {
//     int a=3231;
//     int count=0;
//     while (a)
//     {
//         if(a%2==1)
//         {count++;}
//         a=a/2;
//     }
//     printf("%d",count);
//     return 0;
// }

// 法2：按位与实现
#include<stdio.h>
int main()
{
    int num,count;
    int i=0;
    scanf("%d",&num);
    for(i=0;i<32;i++)
    {
        if((num & (1<<i))!=0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

