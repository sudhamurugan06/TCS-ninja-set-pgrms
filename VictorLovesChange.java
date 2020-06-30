Victor Loves Change
Victor has N gold coins, and victor is supposed to split these gold coins into few bags, such that


1. No gold coins can be broken


2. No bag can be empty


After splitting the gold coins, victor will go shopping. He is going to buy one product the price of which can be any value between 1 and N.  He should be able to combine these bags and give the exact change.


Find the minimum number of bags that Victor can use but still give out all possible change. 

Input Format : One single integer input N, where N is the number of gold coins

Input Constraints : 1<=N<=10^9

Output Format : One single integer output denoting the minimum number of bags

Sample Input :

1000
Sample Output :

10
*********************************************************************ANSWER*******************************************************************************************
import java.util.*;
public class Main{
  public static void main(String []args){
    long n;
    Scanner s=new Scanner(System.in);
    n=s.nextInt();
    long c=0;
    while(n>0){
      n=n/2;
      c++;
    }
    System.out.print(c);
  }
