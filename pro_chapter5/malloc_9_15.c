#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i;
    int *p=(int*)malloc(2*INT_MAX);
    if(NULL==p)
    {
        printf("%s\n",strerror(errno));
    }
    else
    {
        for(i=0;i<10;i++)
    {
        *(p+i)=i;
    }
    for(i=0;i<10;i++)
    {
        printf("%d  ",*(p+i));
    }
    }
    free(p);
    p=NULL;
    return 0;
}