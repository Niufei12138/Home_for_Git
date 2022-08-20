// 写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
// 例如：给定s1=AABCD和s2=BCDAA,返回1
// 给定s1=abcd和s2=ACBD,返回0.
#include<stdio.h>
#include<string.h>
int is_l_r_oppse(char arr1[],char arr2[])
{
    int len1=strlen(arr1);
    int len2=strlen(arr2);
    int i;
    if(len1==len2)
    {
        for(i=0;i<len1;i++)
        {
            if(arr1[i]!=arr2[len1-1-i])
            {
                return 0;
            }
        }
        return 1;
    }

}
int main()
{
    char arr1[]="abcdef";
    char arr2[]="fedcbb";
    int ret=is_l_r_oppse(arr1,arr2);
    if(ret==1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}