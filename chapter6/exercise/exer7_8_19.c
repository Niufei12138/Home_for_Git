// 喝汽水，一瓶1元，两个水瓶换一瓶，最多喝几瓶
#include<stdio.h>
int main()
{
    int money;
    // int money=20;
    int num_water=0;
    int num_bol=0;
    scanf("%d",&money);
    while (money||num_bol>1)
    {
        if(money>0)
        {
        money--;
        num_water++;
        num_bol++;
        }
        if(num_bol>=2)
        {
            num_bol-=2;
            num_water++;
            num_bol++;
        }
    }
    printf("%d",num_water);

    return 0;
}

// num_water 20  10  5  2 1 1
// num_bol 20  10  5  3 2