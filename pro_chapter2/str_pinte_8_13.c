#include<stdio.h>
int main()
{
    char *pstr="hello world";
    *pstr='H';
    printf("%s",pstr);
    return 0;
}

// int main()
// {
//     char arr[]="heool";
//     printf("%s",&arr[0]);
//     return 0;
// }