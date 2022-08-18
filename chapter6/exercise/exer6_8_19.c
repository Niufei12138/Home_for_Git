// ¥Ú”°
//        * 
//       ***
//      *****
//     *******
//    *********
//     *******
//      *****
//       ***
//        *

#include<stdio.h>
int main()
{
    int len,hengjuli,i,j;
    printf(" ‰»Î");
    while(1)
    {
    scanf("%d%d",&len,&hengjuli);
    if(len%2==1&&len<=hengjuli)
    {
        break;
    }
    else if(len%2==0)
    {
        printf("«Î ‰»Î∆Ê ˝£∫");
    }
    else{printf("∫·œÚæ‡¿ÎÃ´∂Ã¡À");}
    }
    for(i=0;i<(len*2-1);i++)
    {
        if(i<len)
        {
            for(j=0;j<hengjuli-1-i;j++)
            {printf(" ");}
            for(j=0;j<(i*2+1);j++)
            {printf("*");}
        }
        if(i>=len)
        {
            for(j=0;j<(hengjuli-len+i-len+1);j++)
             {printf(" ");}
            for(j=0;j<(i*2+1-4*(i-(len-1)));j++)
            {printf("*");}
        }
        printf("\n");
    }
    return 0;
}