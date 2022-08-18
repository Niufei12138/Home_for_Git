// 打印1~10000之间的子幂数（水仙花数）
#include<stdio.h>
#include<math.h>
int main()
{
    int i,tem;
    for(i=0;i<=100000;i++)
    {
        int m=0;
        int weishu=0;
        tem=i;
        while (tem!=0)
        {
            weishu++;
            tem/=10;
        }
        // printf("%d  ",weishu);
        tem=i;
        while(tem!=0)
        {
            m=m+pow((tem%10),weishu);
            tem/=10;
        }
        if(m==i)
        {
            printf("%d   ",i);
        }
        
    }
    return 0;
}


// 153     153%10=3  153/10=15   15%10=5  1
// 