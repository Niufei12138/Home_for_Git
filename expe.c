#include <stdio.h>
#include <math.h>
#include<string.h>
int main()
{
    char arr1[10]="acd@ef.id?��ð�*��Ȼ��";
    char arr2[3]="@.?*";
    char* p=strtok(arr1,arr2);
    p=strtok(NULL,arr2);
    // p=strtok(arr1,arr2);
    printf("%s",p);
    return 0;
}