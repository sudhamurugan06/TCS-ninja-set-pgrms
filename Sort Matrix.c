#include<stdio.h>
#include <stdlib.h>

int main()
{
int r,c;
scanf("%d %d\n",&r,&c);
int a[r][c],b[r*c],k=0;
for(int i=1;i<=r;i++)
{
    for(int j=1;j<=c;j++){
        scanf("%d ",&a[i][j]);
        b[k++]=a[i][j];
    }
}
for(int i=0;i<=k;i++){
 for(int j=i;j<=k;j++)
 {
     if(b[i]>b[j]){
         b[i]=b[i]+b[j];
         b[j]=b[i]-b[j];
         b[i]=b[i]-b[j];
     }
 }
}k=1;
for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
    printf("%d ",b[k++]);}printf("\n");
}
}
