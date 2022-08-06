#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i;
	int *p = arr;
	for (i = 0; i < 10; i++)
	{
		//px = p + i;
		*(p + i) = 1;
		//因为定义指针类型为int*，所以p每加1，指针变量会加4，指向下一元素
	}
	return 0;
}