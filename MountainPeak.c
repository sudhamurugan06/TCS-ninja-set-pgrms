Mountain Peak Sequence
Consider the first three natural numbers 1, 2, 3. These can be arranged in the following ways: 2, 3, 1 and 1, 3, 2. Inboth of these

arrangements, the numbers increase to a certain point and then decrease. A sequence with this property is called a “mountain

peak sequence”.

Given an integer N, write a program to find the remainder of mountain peak arrangements that can be obtained by rearranging the

numbers 1, 2, …, N. 

Input Format : One line containing the integer N

Input Constraints : Mod = 10^9 +7
3 ≤ N ≤ 10^9

Output Format : An integer m, giving the remainder of the number of mountain peak arrangements that could be obtained from 1, 2, …, N is divide by Mod

Sample Input :

3
Sample Output :

2
*************************************************************************ANSWER*********************************************************************************************
#include<stdio.h>
typedef long long int aa;
aa powm(aa x,aa y){
  aa res=1,mo=1000000007;
  for(int i=0;i<y;i++){
    res=(res*x)%mo;
  }
  return res;
}
int main(){
  aa n,mod=1000000007,res;
  scanf("%lld",&n);
  res=(powm(2,n-1)-2)%mod;
  printf("%lld",res);
}
