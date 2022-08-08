#include<stdio.h>
int main()
{
    char arr[]="hello";
    *(arr+1)='a';
    printf("%c\n",arr[1]);
    printf("%s\n",arr);
    return 0;
}