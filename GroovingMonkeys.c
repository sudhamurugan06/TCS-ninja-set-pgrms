#include <stdio.h>

int isequal(int x[],int m)
{
    int c1=0;
    for(int k=1;k<=m;k++)
    {
        if(x[k]==k)
        c1++;
    }
    return c1;
}
int main() {
 int n,a[100],i,b[100],k,c[100],cnt,t;
 scanf("%d",&t);
 while(t>0)
 {
 cnt=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 scanf("%d",&a[i]);
 b[i]=i;
 }int x=8;
while(x>0){ for(i=1;i<=n;i++)
     c[a[i]]=b[i];
 cnt++;
 if(isequal(c,n)==n){
 printf("%d\n",cnt);x=-2;break;}
 else
 {
     for(i=1;i<=n;i++)
     b[i]=c[i];
     
 }}
 t--;}
 return 0;

}
