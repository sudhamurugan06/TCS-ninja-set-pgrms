Superman vs Ironman
DC and MARVEL call Superman and Ironman for a race. Superman could just fly with the suit on at the same one without using jets. Superman himself can fly way faster than Ironman so the suit is just extra weight for ironman.


Ironman asks help from JARVIS. It told him "Your rockets require a minimum force which is the sum of factorial of digits and also equal to the given number"


JARVIS give you the number. 

Input Format : One single integer N

Input Constraints : 1<=N<=10^9

Output Format : A smallest possible number whose sum of factorials of digits equals to N

Sample Input :

1
Sample Output :

1
*******************************************************************************ANSWER******************************************************************************************
include<stdio.h>
int dig(int a){int s=0;
  while(a>0){
    int r=a%10;
    int rr=fat(r);
    s=s+rr;
    a/=10;
  }
               return s;
}
int fat(int b){int fact=1;
  while(b>0){
    fact=fact*b;
    b--;
  }
               return fact;
}
int main(){
  int n;
  scanf("%d",&n);
  int nn=1;
    while(1){
  int sum=dig(nn);
  if(sum==n){
    printf("%d",sum);break;
  }nn+=1;}
}
