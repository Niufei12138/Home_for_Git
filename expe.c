#include <stdio.h>
#include <math.h>
#include<string.h>
int main()
{
    char arr1[10]="abcde";
    char arr2[10]="abcdqqq";
    // const char *p1="abcde";
    // const char *p2="abcdqqq";
    // strncpy(arr1,arr2,2);
    int ret=strncmp(arr1,arr2,4);
    printf("%d",ret);
    return 0;
}