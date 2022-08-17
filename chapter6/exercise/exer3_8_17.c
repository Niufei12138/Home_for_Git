// ±àÐ´º¯ÊýÄæÐò×Ö·û´®
#include<stdio.h>
void oppose(char* p)
{
    int len=0;
    int i;
    char tem;
    while (*(p+len+1)!=0)
    {
        len++;
    }
    printf("%d\n",len);
    for(i=0;i<len/2;i++)
    {
        tem =*(p+i);
        *(p+i)=*(p+len-i);
        *(p+len-i)=tem;
    }
    
}
int main()
{
    char arr[]="abcdef";
    oppose(arr);
    printf("%s ",arr);
    return 0;
}