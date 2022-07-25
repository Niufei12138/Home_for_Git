// 编写代码实现，模拟用户登录情景，并且只能登录三次。
// （只允许输入三次密码，如果密码正确则提示
// 登录成功，如果三次均输入错误，则退出程序
#include<stdio.h>
#include <string.h>
int main()
{
    int i=0;
    char password_right[25]="abcdef";
    for(i=0;i<3;i++)
    {char password_input[20];
    printf("请输入密码：");
    scanf("%s",password_input);
    //password是一个地址，所以不用加&
    // if (password_input == password_right)
    //==双等号不能用来比较两个字符串是否相等，应该用一个库函数strcmp
    if(strcmp(password_input,password_right)==0)
    {
        printf("登录成功");
        i=4;
        break;
    }
    else
    {printf("密码错误\n");}
    }
    if (3==i)
    {printf("三次密码均错误，退出程序\n");}
    return 0;
}