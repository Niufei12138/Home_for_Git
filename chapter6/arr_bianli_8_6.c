#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    int sz=sizeof(arr)/sizeof(arr[0]);
    int* p1=arr;
    // ����int *p=&arr[0]
    for(i=0;i<sz;i++)//�������
    {
        printf("%d ",*p1);
        p1++;
    }
    printf("\n");
    int* p2=&arr[sz-1];//ע�⣬��ȡ����Ԫ�ص�ַʱ��Ҫ��ȡ��ַ������
     for(i=0;i<sz;i++)//�������
    {
        printf("%d ",*p2);
        p2--;
    }
    return 0;
}