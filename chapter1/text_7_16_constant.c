#include <stdio.h>
    // cost修饰的常变量
// int main()
// {
//     // cost修饰的常变量
//     int num1;
//     const int num2qqqq; 
//     num1=100;
//     // num2=4;
//     printf("%d\n%d\n",num1,num2qqqq);
//     num1=8;
//     printf("%d\n%d\n",num1,num2qqqq);
// }


// #define定义的标识符常量
// #include <stdio.h>

// int main()
// {
//     #define Max 50
//     printf("%d\n",Max);
//     return 0;  
// }


// 枚举常量
int main()
{
    enum Sex
    {
        MALE=5,
        FEMALE=6,
        SECRET=4
    };
    printf("%d",MALE);
    printf("%d\n",FEMALE);
    printf("%d",SECRET);
    return 0;
}