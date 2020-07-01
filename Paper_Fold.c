Paper Fold
A piece of paper cannot be folded into half more than 7 times with bare hands. So to overcome this, the company RelearnPro has designed a machine to fold the paper as many times you want by generating immense force.

So given a piece of paper with a thickness 'T' mm, and after folding the paper into half  for 'N' times, find what will be size of the paper in mm. 

Input Format : Two spaced integers T and N where T is the thickness of the paper in mm and N is the number of times a paper has to be folded into half.

Input Constraints : 1<=T,N<=10^9

Output Format : Print the answer in modulus of 10^9

Sample Input :

1 1
Sample Output :

2
**********************************************************************************ANSWER*******************************************************************************
#include<stdio.h>
typedef long long int aa;
aa powr(aa x,aa y){
aa res=1;
  for(aa i=0;i<y;i++){
    res=(res*2)%1000000000;
  }
  return res;
}
int main(){
  aa t,n,res;
  scanf("%lld %lld",&t,&n);
  res=powr(2,n);
  printf("%lld",(t*res)%1000000000);
}
