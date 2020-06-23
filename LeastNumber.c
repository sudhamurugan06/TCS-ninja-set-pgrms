Least Number
You are given an array of positive numbers, find the minimum number which is not present in the list, which also cannot be represented as a combination of numbers in the array. 

Input Format : The first line of input has one single integer input N
The second line of input has N spaced integers

Input Constraints : 1<=N<=10^3
1<=a[i]<=10^3

Output Format : One single integer output

Sample Input :

4
1 2 5 6
Sample Output :

4
********************************************************************************ANSWER********************************************************************************************
#include<stdio.h>
int main(){
  long int n;
  scanf("%ld",&n);
  long int a[n];
  for(long int i=0;i<n;i++){
    scanf("%ld ",&a[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
      if(a[j]>a[j+1]){
        int t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
      }
    }
  }long int sum=1;
  for(int i=0;i<n;i++){
    if(sum<a[i]){break;}
      sum=sum+a[i];
  }
  printf("%ld",sum);
}
