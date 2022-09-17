#include<stdio.h>
#include<stdlib.h>
struct S
{
    int n;
    int a[];
};

int main()
{
    struct S* p =(struct S*)malloc(sizeof(struct S)+5*sizeof(int));
    if(p!=NULL)
    {
        p->n=100;
        int i;
        for(i=0;i<5;i++)
        {
            p->a[i]=i;
        }
        printf("%d ",p->n);
        for(i=0;i<5;i++)
        {
            printf("%d ",p->a[i]);
        } 
    }
    printf("\n");
    struct S*p2=(struct S*)realloc(p,44);
    p=NULL;
    if(p2!=NULL)
    {
        p=p2;
        p2=NULL;
        p->n=200;
        int i;
        for(i=0;i<10;i++)
        {
            p->a[i]=i;
        }
        printf("%d ",p->n);
        for(i=0;i<10;i++)
        {
            printf("%d ",p->a[i]);
        } 
    }
    free(p);
    p=NULL;
    return 0;
}