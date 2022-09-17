#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i;
    int *p=(int*)malloc(10*sizeof(int));
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
    printf("\n");
    }
    int *p2=(int *)realloc(p,50*4);
     if(NULL==p)
    {
        printf("%s\n",strerror(errno));
    }
    else
    {
    for(i=0;i<51;i++)
    {
        printf("%d  ",*(p2+i));
    }
    }
    return 0;
}