// 用函数实现二分查找

#include<stdio.h>
int binary_search(int arr[],int k,int sz)//arr是一个指针地址
{
    int left=0;
    int right=sz;
    int index;
    while (1) 
    {
        index=(left+right)/2;
        if(arr[index]==k)
        {
            return index; //return可以实现break的作用
        }
        
        if((right-left)<=1)
            return -1;
        else
            if(k<arr[index])
                right=index;
            else
                left=index;
    }
    
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k;
    int sz=sizeof(arr)/sizeof(arr[0]);
    while (k!=10086)
    {
        printf("请输入查找数字：");
        scanf("%d",&k);
        int ret=binary_search(arr,k,sz);//传递过去的是数组arr首元素的地址
        if(ret!=-1)
        {printf("存在该元素，下标为: %d\n",ret);}
        else
        {printf("找不到该元素");}

    }
    return 0;
}