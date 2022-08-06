#define _CRT_SECURE_NO_WARNINGS 1

int* test()
{
	int a = 10;
	return &a;
    //出了局部空间后，a被销毁，对应地址空间
    //还给计算机，这个地址可能会被分配给其他程序
    //如果再更根据地址调用可能会出问题
    //所以这也是个野指针
}
int main()
{
	int *p = test();
	*p = 20;
	return 0;
}