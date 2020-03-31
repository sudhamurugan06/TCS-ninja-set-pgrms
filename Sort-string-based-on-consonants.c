int main(){
int n;
scanf("%d\n",&n);
char s[n][100];
int a[n],c=0;
for(int i=0;i<n;i++){

    scanf("%s ",s[i]);
    
}
    for(int i=0;i<n;i++){
    int c=0;
    for(int j=0;j<strlen(s[i]);j++){
        if(s[i][j]!='a'&&s[i][j]!='A'&&s[i][j]!='e'&&s[i][j]!='E'&&s[i][j]!='i'&&s[i][j]!='I'&&s[i][j]!='o'&&s[i][j]!='O'&&s[i][j]!='u'&&s[i][j]!='U'){
            c++;
        }
    }
    a[i]=c;
}

for(int i=0;i<50;i++){
    for(int j=0;j<n;j++){
        if(i==a[j])
    {
    printf("%s\n",s[j]);
}
}
}
}
************************************************************or***********************************************************
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int n,i,cnt,j,a[100]={0},min,pos;
    char s[102][102];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s",s[i]);
    for(i=0;i<n;i++)
    {
        cnt=0;
        for(j=0;j<strlen(s[i]);j++)
        {
            if(s[i][j]!='a' && s[i][j]!='e' && s[i][j]!='i' && s[i][j]!='o' && s[i][j]!='u' && s[i][j]!='A' && s[i][j]!='O' && s[i][j]!='E' && s[i][j]!='I' && s[i][j]!='U' )
            cnt++;
        }
        a[i]=cnt;
    }
    for(i=0;i<n;i++)
    {
        min=103;
        pos=0;
        for(j=0;j<n;j++)
        {
            if(a[j]!=-1 && min>a[j] )
            {
                min=a[j];
                pos=j;
            }
        }
        a[pos]=-1;
        printf("%s ",s[pos]);
    }
    

