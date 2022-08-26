#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
    FILE*pf=fopen("test.txt","r");
    if(pf==NULL)
    {
        printf("%s\n",strerror(errno));
    }
    else
    {
        printf("successful");
    }
    return 0;
}