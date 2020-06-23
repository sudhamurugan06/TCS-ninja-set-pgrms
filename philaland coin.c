#include<stdio.h>
int phil(int s){int c=0;
  while(s>0){
    s>>=1;
    c++;
  }
  return c;
}
int main(){
  int t;
  scanf("%d\n",&t);
  while(t){
    int p;
    scanf("%d\n",&p);
    int ans=phil(p);
    printf("%d\n",ans);t--;
  }
}
