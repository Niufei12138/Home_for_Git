#include<stdio.h>
#include<assert.h>
char* my_strstr( char*p1, char*p2)
{
    assert(p1);
    assert(p2);
    char*tmp_p2=p2;
    char*tem_p1=NULL;//避免非法访问
    if(*p2==0)
    {
        return p1;
    }
    while(*p1!=0)
    {
        tem_p1=p1;
        p2=tmp_p2;
        while(*p1++==*p2++)
        {
            if(*p2==0)
            {return tem_p1;}
        }
        p1=tem_p1;
        p1++;
    }
    return NULL;
}
int main()
{
    char*p1="abcdefgh";
    char*p2="def";
    char*ret=my_strstr(p1,p2);
    if(ret==NULL)
    {
        printf("子串不存在");
    }
    else
    {
        printf("字串存在%s",ret);
    }
    return 0;
}