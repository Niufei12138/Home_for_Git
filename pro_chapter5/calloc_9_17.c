#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int *p=(int*)calloc(10,sizeof(int));
    if(p==NULL)
    {
        printf("%s\n",strerror(errno));
    }
    else
    {
        int i=0;
        for(i=0;i<10;i++)
        {
            printf("%d ",*(p+i));
        }
    }
    //ÊÍ·Å¿Õ¼ä
    free(p);
    p=NULL;
    return 0;
}