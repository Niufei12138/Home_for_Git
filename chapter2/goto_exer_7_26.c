#include<stdio.h>
#include<process.h>
#include<string.h>
int main()
{
    char input[20]={0};
    system("shutdown -s -t 60");//60���ػ�
    printf("�����룺����˧�磬������Խ���60���ػ�\n");
    again:
    printf("���룺");
    scanf("%s",input);
    if (0==strcmp(input,"����˧��"))
    {
        system("shutdown -a");
    }
    else
        goto again;
    return 0;
}