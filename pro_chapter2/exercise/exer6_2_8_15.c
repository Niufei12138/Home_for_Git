#include<stdio.h>
#include<string.h>
int main()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int b[]={1,2,3,4,5,6};
    int *ptr = (int *)(*(a + 1));
    printf("%d\n",sizeof(*b));
    printf("%d\n",sizeof(*(a)));
    printf("%d\n",sizeof(*(a+1))); //8
    printf("%d\n",*(ptr-1)); //4
    //a��������±�ʾ���е�ַ
    // *(a+1)���������ʾ�ڶ�����Ԫ�ص�ַ
    //��sizeof����ʱ��ָ���У�����ָ��Ԫ��

    int arr[]={1,2,3,4,5,6};
    int *p=arr;
    // *(p+2)==arr[2]==p[2]==> *(arr+2)=arr[2]
return 0;
}