#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,i;
scanf("%d",&n);
long int a[n],b[n];
for(i=0;i<n;i++)
{
    scanf("%ld",&a[i]);
}
long int flag=0,k,j,max,maxx;
while(k!=1)
{
k=0;
for(i=0;i<n;i=i+3)
{
    max=0;
    maxx=999999;
    if(flag==0)
    {
    for(j=i;j<n&&j<i+3;j++)
    {
        if(a[j]>max)
        max=a[j];
    }
    b[k++]=max;
    }
    else
    {
        for(j=i;j<n&&j<i+3;j++)
        {
            if(a[j]<maxx)
            maxx=a[j];
        }
        b[k++]=maxx;
    }
}
flag=!flag;
n=k;
for(i=0;i<k;i++)
{
    a[i]=b[i];
    b[i]=0;
    //printf("%d ",a[i]);
}
//printf("\n");
}
printf("%ld",a[0]);
}
**************************************************************or************************************************************
#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,min,max,k,j,i,p;
scanf("%d",&n);
long long int a[n],b[n];
for(i=0;i<n;i++)
scanf("%lld ",&a[i]);
p=n;
while(p>1)
{
j=0;
k=0;
while(k<p)
{
max=a[k];
for(i=k+1;i<k+3;i++)
{
    if(a[i]>max&&i<p)
    max=a[i];
}
b[j++]=max;
k=k+3;
}
k=0;
p=0;
while(k<j&&j>1)
{
min=b[k];
for(i=k+1;i<k+3;i++)
{
    if(b[i]<min&&i<j)
    min=b[i];
}
a[p++]=min;
k=k+3;
}
if(j==1)
printf("%lld",b[0]);
if(p==1)
printf("%lld",a[0]);
}
}
