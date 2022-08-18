// Ê¹µÃrust=a+aa+aaa+aaaa+aaaaa
#include<stdio.h>

int main()
{
    int a,n,i;
    int rsut=0,ret=0;
    scanf("%d%d",&a,&n);
    for(i=0;i<n;i++)
    {
        ret=ret*10+a;
        printf("%8d\n",ret);
        rsut+=ret;
    }
    printf("\n%8d\n",rsut);
    return 0;
}

