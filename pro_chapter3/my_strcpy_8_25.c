#include <stdio.h>
#include<assert.h>
char* my_strcpy (char*dest,const char*src)
{
    assert(dest);
    assert(src);
    char* ret=dest;
    while(*dest++=*src++)
    {
     ;
    }
    return ret;
}
int main()
{
    char arr1[]="abcdef";
    char arr2[]="bit";
    my_strcpy(arr1,arr2);
    printf("%s\n",arr1);
    return 0;
}