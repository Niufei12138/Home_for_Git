#include<stdio.h>
void print(char*str)
{
    printf("%s",str);
    printf("\n");
}
int main()
{
    char arr[]="abcdef";
    void (*p)(char*)=print;
    (*p)(arr);
    (p)(arr);
    p(arr);
    (**p)(arr);
    return 0;
}