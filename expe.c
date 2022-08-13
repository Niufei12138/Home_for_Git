#include <stdio.h>
#include<string.h>
char* my_strcpy(char* dest,const char* src)
{
    ;
}
int main()
{
    char*(*pf)(char*,const char*);
    char*(*pfarr[4])(char*,const char*)={my_strcpy,my_strcpy,my_strcpy,my_strcpy};

}