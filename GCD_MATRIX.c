GCD Matrix
In mathematics, the greatest common divisor (gcd) of two or more integers, which are not all zero, is the largest positive integer that divides each of the integers. For example, the gcd of 8 and 12 is 4.


You are given a 2D array, find the GCD of the elements in the diagonals of the matrix. 

Input Format : The first line of input has one single integer N
The next N lines will have N spaced integer inputs

Input Constraints : 1<=N<=100
1<=a[i]<=100

Output Format : One single integer output denoting the GCD of the diagonal elements

Sample Input :

2
1 2
3 4
Sample Output :

1
********************************************************************************ANSWER**************************************************************************************
#include<stdio.h>
int gcd(int a,int b){
  if(a==0)
    return b;
  return gcd(b%a,a);
}
int main(){
  int n;
  scanf("%d",&n);int arr[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){scanf("%d ",&arr[i][j]);
  }
}int c=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if((i+j)==n-1||i==j){
        c=gcd(c,arr[i][j]);
      }
    }
  }
  printf("%d",c);
}
