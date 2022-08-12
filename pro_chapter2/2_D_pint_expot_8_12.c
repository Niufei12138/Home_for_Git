#include<stdio.h>
void test(int **pp)
{
    // int i;
    printf("%d\n",**pp);
    // for (i=0;i<9;i++)
    // {
    //     printf()
    // }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int *p=arr;
    int **pp=&p;
    test(pp);
    test(&p);
    
    return 0;
}