#include <stdio.h>
int main()
{
    int line=0;
    printf("开始积累代码！");
    while (line<=20000)
    {
        printf("完成一行代码,累计：%d\n",line);
        line++;
    }
    printf("完成");
    return 0;
}