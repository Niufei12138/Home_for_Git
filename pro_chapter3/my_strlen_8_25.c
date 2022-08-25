#include<stdio.h>
#include<assert.h>
int my_strlen(const char* arr)
{
    int count=0;
    assert(arr!=NULL);
    while (*arr)
    {
        count++;
        arr++;
    }
    return count;
    
}
int main()
{
    int len=my_strlen("abcdefgh");
    printf("%d\n",len);
    return 0;
}