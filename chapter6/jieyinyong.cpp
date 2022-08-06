#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0x11223344;
	int* p1 = &a;
	char* p2 = (char*)&a;
	*p2 = 2;
	*p1 = 1;
	return 0;
}