#include <stdio.h>
// int main()
// {
//     int ch=0;
//     while ((ch=getchar())!=EOF)
//     {
//         putchar(ch);
//     }
//     return 0;
// }


int main()
{
    char ret='a';
    int ch=0;
    char password[20]={0};
    printf("请输入密码：>");
    scanf("%s",password);
    while (ch=getchar()!='\n')
    //读取多余字符
    {
        ;//空语句
    }
    
    printf("请确认（Y/N）:>");
    // 输入123456+回车（\n）
    printf("%c",ret);
    ret =getchar();
    // printf("%s",ret);
    if (ret=='Y')
    {
        printf("确认成功\n");
    }
    else
    {
        printf("确认放弃\n");
    }
    printf("%c",ret);
    return 0;
}