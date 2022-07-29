#include<stdio.h>//4. 写一个函数，每调用一次这个函数，就会将num 的值增加1。
void Add(int* p)
{
    (*p)++;
}
int main()
{
    int num=0;
        Add(&num);
    printf("函数调用次数：%d\n",num);
        Add(&num);
    printf("函数调用次数：%d\n",num);
        Add(&num);
    printf("函数调用次数：%d\n",num);
    return 0;
}