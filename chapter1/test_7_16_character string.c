#include <stdio.h>
// 字符串输出
// int main()
// {
//     char ass1[]="abcde";
//     char ass2[]={'a','b','c','d','e',0};
//     printf("%s\n",ass1);
//     printf("%s\n",ass2);

//     return 0;
// }


// 字符串长度
#include <string.h>
int main()
{
    char ass1[]="abcde";
    char ass2[]={'a','b','c','d','e'};
    char ass3[]={'a','b','c','d','e',0};
    printf("%d\n",strlen(ass1));
    printf("%d\n",strlen(ass2));
    printf("%d\n",strlen(ass3));
    return 0;
}