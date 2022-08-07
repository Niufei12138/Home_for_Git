#include<stdio.h>
int count_bit_one(int a)
{
    // 0000000000001111111
    // 0000000000000000001
    int i;
    int count=0;
    for(i=0;i<32;i++)
    {
        if(a&(1<<i))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a=0;
    scanf("%d",&a);
    int count=count_bit_one(a);
    printf("%d",count);
    return 0;
}

// 11111111111111111111111111 n
// 11111111111111111111111110 n-1
// 11111111111111111111111110 n
// 11111111111111111111111101 n-1
// 11111111111111111111111100 n
// 
