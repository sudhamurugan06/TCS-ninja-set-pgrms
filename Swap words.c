#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000][1000],t[1000];
    int i,d=0;
    while(scanf("%s",s[d])>0)
    d++;
    for(i=0;i<d-1;i++)
    {
        if(strcmp(s[i],s[d-1])==0)
        {
            if(i-1>=0 && i+1<d-1)
            {
                strcpy(t,s[i-1]);
                strcpy(s[i-1],s[i+1]);
                strcpy(s[i+1],t);
            }
        }
    }
    for(i=0;i<d-1;i++)
    printf("%s ",s[i]);
}
**************************************************************or*********************************************
