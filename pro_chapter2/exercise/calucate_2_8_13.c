#include<stdio.h>
void menu()
{
    printf("############################################\n");
    printf("##########    1.add       2.sub    #########\n");
    printf("##########    3.mul       4.div    #########\n");
    printf("################  0.exit      ##############\n");
    printf("############################################\n");
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
void calc(int(*pf)(int,int))
{
    int x,y;
    printf("�����룺\n");
    scanf("%d%d",&x,&y);
    printf("%d\n",pf(x,y));
}
int main()
{
    int choose_num=0;
    do
    {
    menu();
    printf("��������Ҫ�ļ��㷨����ţ�\n");
    scanf("%d",&choose_num);
    switch (choose_num)
    {
    case 0:
        printf("�˳�");
        break;
    case 1:
        calc(&add);
        break;
    case 2:
        calc(sub);
        break;
    case 3:
        calc(mul);
        break;
    case 4:
        calc(div);
        break;
    default:
        printf("�����������������");
        break;
    }
    } 
    while (choose_num);
    
    return 0;
}