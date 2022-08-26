#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strcmp(const char*p1,const char*p2)
{
    assert(p1&&p2);
    while(*p1==*p2)
    {
        if(*p1==0)
        {
            return 0;
        }
        p1++;
        p2++;
    }
    if(*p1>*p2)
    {
        return 1;
    }
    else 
    {
        return -1;
    }
}
int main()
{
    char* str1="abc";
    char* str2="abc";
    // int ret=strcmp(str1,str2);
    int ret=my_strcmp(str1,str2);
    printf("%d\n",ret);
    return 0;
}