6th June 1906, there was a big fire accident at a 5 star hotel in which more than 160 people died, from that time no one even dared to go near that burnt place, because it was believed that the place became haunted. This fear among people went increasing due to the suspicious deaths of the people who tried entering the hotel. More than 100 years have passed, but that has not reduced thee fear among the people even a bit.


Dhoni is a person who likes adventures, so wanted to see what actually is the mystery of the hotel. So on a Friday evening he went inside the hotel with a camera which was live streamed live on his Facebook page.  

The live stream lasted not even for an hour, all the electronic equipment he had began malfunctioning.

He might be brave, but being alone in a place which is believed to be haunted and that too in late evening, his nerves got him. It was so quite so that, he could hear his own heart beat increasing as a drum roll. So he decided to exit the building, but the as you know what would happen next, the door was locked, he couldn't find another exit route. The fear in him has reached a peak, and to make it even more worse he could hear something rolling behind him. The rolling noise came near and near every second, and suddenly he felt something touching his feet. He turned around slow to see a small glass  jar which has a paper inside it. He took the paper and read the note,



He rushed to the particular floor, as soon he did, there he heard loud numbers being shouted, those were the number of candles he should lit everyday.

Its Game on! 

Input Format : You will be given with two lines of input, first line of input has two spaced integers denoting the N (total number of days you should lit the candles) and X(number of candles in each room) and the second line of input has n spaced integers denoting the number of candles he should lit every day

Input Constraints : 1<=N,X<=10^9
1<=a[i]<=10^9

Output Format : N digit passcode If you happen to move more than nine rooms on any particular day then use take only the last digit of that number.

Sample Input :

3 5
3 7 9
Sample Output :

021
********************************************************************ANSWER******************************************************************
#include<stdio.h>
typedef long long int aa;
int main(){
  aa n,x,c=0,l=0;
  scanf("%lld %lld\n",&n,&x);
  aa a[n];
  for(aa i=0;i<n;i++){
    scanf("%lld ",&a[i]);}
  for(aa i=0;i<n;i++){
 l=a[i]+l;
  c=l/x;
    l=l-(c*x);
    c=c%10;
   printf("%lld",c);
  }
  
}
