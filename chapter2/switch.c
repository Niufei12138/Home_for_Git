// 常规输出
// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("请输入星期几（填写数字）：");
//     scanf("%d",&a);
//     switch (a)
//     {
//     case 1:
//         printf("星期一");
//         break;
//     case 2:
//         printf("星期二");
//         break;
//     case 3:
//         printf("星期三");
//         break;
//     case 4:
//         printf("星期四");
//         break;
//     case 5:
//         printf("星期五");
//         break;
//     case 6:
//         printf("星期六");
//         break;
//     case 7:
//         printf("星期七");
//         break;
//     }
//     return 0;
// }


// 输入星期几，输出工作日/休息日
#include <stdio.h>
int main()
{
    int a;
    printf("请输入星期几（填写数字）：");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("工作日");
        break;
    default:
        printf("随便");
    case 6:
    case 7:
        printf("休息日");
        // break;

    }
    return 0;
}   