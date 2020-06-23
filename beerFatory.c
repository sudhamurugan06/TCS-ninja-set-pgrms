Victor is working as a manager in a beer factory. The company has a big container which is completely filled with beer. The customer might ask for any quantity of beer from the company, and that quantity of beer must be given to the  particular customer. We will not be able to create jars of all possible capacities. The Jars of specific quantities are manufactured , and these will be used as a means for measuring the beer. Once a jar is used, the same jar cannot be reused to fill or transfer. Once used it will be thrown away. So Help Victor to figure out the minimum number of cans required to be able to provide any quantity of beer requested by the customer. 

Input Format : One single integer input N, where N is the Capacity of the container in the beer factory.

Input Constraints : 1<=N<=10^18

Output Format : One single integer input corresponding to the minimum number of jars

Sample Input :

996483126884184635
Sample Output :

39
************************************************************************************************************************************
#include<stdio.h>

int main()
{
 long int n;
  scanf("%ld",&n);long int p=0,c=0,s=1;
  while(p<n){
    p=p+s;
    s=s*3;c++;}
    
      printf("%ld",c);
  
}
