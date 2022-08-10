#include<stdio.h>
// #include<string.h>
void test(int* arr)
{
    int sz=sizeof(arr)/sizeof(arr[0]);//算出来的是指针/整型的大小，而不是长度
    printf("%d\n",sz);
}
int main()
{
    int arr[10]={0};
    test(arr);
    return 0;
}