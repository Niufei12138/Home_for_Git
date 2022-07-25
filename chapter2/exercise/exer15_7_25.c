#include<stdio.h>//输出打印九九乘法表
int main()
{
    int line1[]={1,2,3,4,5,6,7,8,9};
    int line2[]={1,2,3,4,5,6,7,8,9};
    int i=0;
    int j=0;
    int result=0;
    for(i=0;i<9;i++)
    {
        for(j=i;j<9;j++)
        {
            result=line1[i]*line2[j];
            printf("%d*%d=%-2d   ",line1[i],line2[j],result);
        }
        printf("\n");
    }
    return 0;
}