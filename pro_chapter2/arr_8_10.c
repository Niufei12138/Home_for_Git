#include<stdio.h>
// #include<string.h>
void test(int* arr)
{
    int sz=sizeof(arr)/sizeof(arr[0]);//���������ָ��/���͵Ĵ�С�������ǳ���
    printf("%d\n",sz);
}
int main()
{
    int arr[10]={0};
    test(arr);
    return 0;
}