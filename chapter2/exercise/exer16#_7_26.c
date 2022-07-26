//制作的第一个游戏
// 猜数字游戏：电脑随机生成数字，玩家猜数字
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
void srand( unsigned int seed );
void menu()
{
    printf("****************************\n");
    printf("***** 1.play    0.exit *****\n");
    printf("****************************\n");
}
void game()
{
    int ret;
    int guess;
    // srand((unsigned int)time(NULL));//拿时间戳作为随机数的生成起点
    // //unsigned int强制类型转换，NULL空指针
    ret=(rand()%101);//1.生成随机数在0~32767之间，可设置为1~100之间
    //%101可得到0~100之间的随机数
    // printf("%d\n",ret);
    //2.猜数字
    while(1)
    {
        printf("请猜数字；");
        scanf("%d",&guess);
        if (guess>ret)
        {printf("————>猜大了\n");}
        else if(guess<ret)
        {printf("————>猜小了\n");}
        else
        {printf("————>恭喜你，猜对了！！\n");
        break;}
        
    }
}
int main()//主函数
{
    int input;
    srand((unsigned int)time(NULL));//拿时间戳作为随机数的生成起点，注意：起点只需要一次
    // 如果每次重玩游戏，起点近似，后续生成的随机数也会相近，所以将他放在主函数中
    //unsigned int强制类型转换，NULL空指针
    do
    {
        menu();
        printf("请选择数字：");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("\n选择错误\n");
            break;
        }
    } 
        while (input);
    
    return 0;
}