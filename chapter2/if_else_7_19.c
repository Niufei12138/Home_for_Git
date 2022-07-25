#include<stdio.h>
int main()
{
    int age=34;
    if (age<18)
        printf("未成年");
    else if (age<28)
        printf("青年\n");
    else if(age<50)
        printf("壮年\n");
    else
        printf("老年\n");
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int age = 50;
//     scanf("%d", &age);
//     if(age<18)
//     {
//     printf("少年\n");
//     }
//     else if(age>=18 && age<30)
//     {
//     printf("青年\n");
//     }
//     else if(age>=30 && age<50)
//     {
//         printf("中年\n");
//     }
//     else if(age>=50 && age<80)
//     {
//     printf("老年\n");
//     }
//     else
//     {
//     printf("老寿星\n");
//     }
//     return 0;
// }