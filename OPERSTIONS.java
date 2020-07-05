What's wrong with you
Vasiharan is a man who wants to make a robot to perform all the Arithmetic operations. He had programmed the multiplication and subtraction and fed the robot. But because of some mistake the robot gives a random number when two numbers are given as an input. Vasiharan found that the output is the minimum number of times the multiplication and subtraction is performed to derive the second number from the first number. But he still doubts about it. So he planned to test with some pairs of numbers. Can you make a program to help him? 

Input Format : The first and the only line of the input contains two distinct integers n and m separated by a space.

Input Constraints : 1<=n,m<=10^4

Output Format : Print a single integer-the number of operations needed to get m out of n.

Sample Input :

4 6
Sample Output :

2
************************************************************************ANSWERS*******************************************************************************
import java.util.*;
public class Main{
  public static void main(String args[]){
    int n,m;
    Scanner s=new Scanner(System.in);
    n=s.nextInt();m=s.nextInt();
    int ans=con(n,m);System.out.print(ans);}
  static int con(int n,int m){
    if(n==m)
      return 0;
    else if(n>m)
      return n-m;
    else if(n<=0&&m>0)
      return -1;
    else if(m%2==1)
      return 1+con(n,m+1);
    else
      return 1+con(n,m/2);
  
}}
