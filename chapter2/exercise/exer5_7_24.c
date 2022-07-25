#include<stdio.h>// 3. 在一个有序数组中查找具体的某个数字n
// int main()//常规写法
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10,11};
//     int sz=(sizeof(arr)/sizeof(arr[0]));
//     int k;
//     int i=0;
//     printf("输入想查找的数字：");
//     scanf("%d",&k);
//     for(i=0;i<sz;i++)
//     {
//         if (k==arr[i])
//         {printf("位置标号为：%d",i);
//         break;}
//     }
//     if(i==sz)
//     {printf("没有对应的数字。");}
//     return 0;
// }
int main()//高效查找：二分法查找
{
    int arr[]={1,2,2,5,6,7,8,9,12,13,14,15,16};
    // int arr[]={9,8,7,6,5,4,3,2,1};//暂不支持该种数列元素查找
    int sz=(sizeof(arr)/sizeof(arr[0]))-1;
    int a=0;//另一端的数字
    int k;//想查找的数字
    int i;//一端的数字
    int i0;//用于存上一状态i的数值
    printf("输入想查找的数字：");
    scanf("%d",&k);
    if (k>=arr[0]&&k<=arr[sz])
    {
            for (i=sz;k!=arr[i];i=i)
    {
        if (i==i0)
        {printf("无该数字");
            break;}
        i0=i;
        i=(i+a)/2;
        if(k<arr[i])
            {
            if(a<i0)
                {a=a;}
            else
                a=i0;}
        else
            {
            if(a>i0)
                {a=a;}
            else
                a=i0;}
    }
    if(k==arr[i])
    {printf("数字下标为%d,对应的数字为：%d",i,arr[i]);}}
else
    {printf("无该数字。");}
    // printf("%d",sz);
    return 0;
}