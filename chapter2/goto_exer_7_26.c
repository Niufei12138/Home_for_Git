#include<stdio.h>
#include<process.h>
#include<string.h>
int main()
{
    char input[20]={0};
    system("shutdown -s -t 60");//60秒后关机
    printf("请输入：我是帅哥，否则电脑将在60秒后关机\n");
    again:
    printf("输入：");
    scanf("%s",input);
    if (0==strcmp(input,"我是帅哥"))
    {
        system("shutdown -a");
    }
    else
        goto again;
    return 0;
}