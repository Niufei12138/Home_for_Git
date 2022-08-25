#include<stdio.h>
#include<assert.h>
char * my_strcat(char* dest,const char* src)
{

    assert(dest && src);
    char*ret=dest;
    // 找到目标字符串其实0位置
    while (*dest)
    {
        dest++;
    }
    while (*dest++=*src++)
    {
        ;
    }
    return ret;
    

}
int main()
{
    char arr1[30]="abcdefgh";//给目标字符串足够大的空间
    char arr2[]="bit";
    my_strcat(arr1,arr2);
    printf("%s\n",arr1);
    return 0;
}