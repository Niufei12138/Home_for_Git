#include<stdio.h>
void test(int arp[],int sz)
{
    printf("%p\n",&arp[2]);
}
int main()
{
    int arr[]={12,423,423};
    printf("%p\n",&arr[2]);
    test(arr,3);
    return 0;
}