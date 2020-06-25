Is Present
1, 3, 7, 15, 31, 63,....

is an infinate number series.

Given a number N, check whether the number N is present in the series or not!

If present print "YES" else print "NO". 

Input Format : One integer value "N"

Input Constraints : 1<=N<=10^9

Output Format : YES if the number is present in the series or
NO, if the number is not present in the series

Sample Input :

1023
Sample Output :

YES
*****************************************************************************ANSWER*******************************************************************************************
#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
 int a[n];
  a[-1]=0;int c=0;
  for(int i=0;i<n;i++){
    a[i]=a[i-1]*2+1;
    if(a[i]==n){
    c=1;
      printf("YES");break;
    }
    else if(a[i]>n){break;}
  }
  if(c==0){printf("NO");}
  
}
