// 编写函数逆序字符串
#include<stdio.h>
#include<assert.h>
void oppose( char* p)
{
    assert(p!=NULL);//断言：要求p不能为空指针
    int len=0;
    int i;
    char tem;
    while (*(p+len+1)!=0)
    {
        len++;
    }
    // printf("%d\n",len);
    for(i=0;i<len/2;i++)
    {
        tem =*(p+i);
        *(p+i)=*(p+len-i);
        *(p+len-i)=tem;
    }
    
}
int main()
{
    char arr[]="I'm iron man!";
    oppose(arr);
    printf("%s ",arr);
    return 0;
}