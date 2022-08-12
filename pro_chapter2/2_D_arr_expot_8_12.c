#include<stdio.h>
void test(int arr[3][5])//可以
{}
void test(int arr[][5])//可以
{}
void test(int arr[3][])//不可以，列不能省略
{}
void test(int(*arr)[5])//可以
{}

int main()
{
    int arr[3][5]={0};
    test(arr);
    return 0;
}