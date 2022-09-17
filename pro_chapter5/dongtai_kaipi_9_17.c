#include<stdlib.h>
#include<stdio.h>
struct s
{
    int a;
    int* arr;
};

int main()
{
    struct s*ps=(struct s*)malloc(sizeof(struct s));
    if(ps!=NULL)
    {
        ps->a=100;
        ps->arr=(int *)malloc(sizeof(5*sizeof(int)));
    }
    int i;
    for(i=0;i<5;i++)
    {
        ps->arr[i]=i;
        printf("%d ",ps->arr[i]);
    }
    //更改空间大小
    int *ptr=(int *)realloc(ps->arr,10*sizeof(int));
    if(ptr!=NULL)
    {
        ps->arr=ptr;
        ptr=NULL;
        for(i=5;i<10;i++)
        {
        ps->arr[i]=i;
        }
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",ps->arr[i]);
    }
    free(ps->arr);
    free(ps);
    return 0;
}