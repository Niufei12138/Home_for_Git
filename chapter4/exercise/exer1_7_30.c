#include<stdio.h> //ð������
void bubble_sort(int* arr,int sz)
{ 
    int i=0;
    int j=0;
    for (i=0;i<sz-1;i++)
    {
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tem=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tem;
            }
        }
    }
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    int i;
    int sz=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    printf("arr[]=");  
    for(i=0;i<sz;i++)
    {
    printf("%d ",arr[i]);
    }
    return 0;
}