#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",&arr[9]);
    printf("%d\n",&arr[0]);
    printf("%d\n",&arr[9]-&arr[0]);
    //�õ��м��Ԫ�ظ�����9��
    return 0;
}