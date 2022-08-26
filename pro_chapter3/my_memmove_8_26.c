#include<stdio.h>
#include<memory.h>
#include<string.h>
void*my_memmove(void*dest,void*src,int size_n)
{
    void* tem=dest;
    // 情况1，dest<src,从前往后
    if(dest<src)
    {
        while(size_n--)
        {
        *(char*)dest=*(char*)src;
        dest=(char*)dest+1;
        src=(char*)src+1;
        }
    }
    // 情况2，dest>=src，从后往前
    else
    {
        dest=(char*)dest+size_n-1;
        src=(char*)src+size_n-1;
        while (size_n--)
        {
            *(char*)dest=*(char*)src;
            dest=(char*)dest-1;
            src=(char*)src-1;
        }
    }
    return dest;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    my_memmove(arr+2,arr,20);
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}