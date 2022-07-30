// 接受一个整型值（无符号），按照顺序打印它的每一位。
// 例如：
// 输入：1234，输出 1 2 3 4
#include<stdio.h>
void print(int num)
{
    if (num>0)
    {
        print(num/10);
        printf("%d ",(num%10));
    }

}
int main()
{
    unsigned int num=0;
    scanf("%d",&num);//输入1234
    print(num);
    return 0;
}