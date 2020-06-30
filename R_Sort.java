R-Sort
Given an 2D array array , sort each row of the 2D array in ascending order. 

Input Format : The first line consists of an integer N, which refers to the row size and column size of the matrix.
Next N lines follow the matrix.

Input Constraints : 1 <= N <= 500
1 <= Mat[i][j] <= 10^9

Output Format : N lines of output

Sample Input :

3
1 3 2
5 4 6
8 7 9
Sample Output :

1 2 3
4 5 6
7 8 9
*********************************
import java.util.*;
public class Main{
  public static void main(String []args){
    int n=0;
    Scanner s=new Scanner(System.in);
    n=s.nextInt();
    long [][]a=new long[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        a[i][j]=s.nextInt();}}
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++)
      {for(int k=0;k<n-1;k++){      
      if(a[j][k]>a[j][k+1]){
          long t=a[j][k];
          a[j][k]=a[j][k+1];
          a[j][k+1]=t;
        }}}}
    for(int i=0;i<n;i++){for(int j=0;j<n;j++){
      System.out.print(a[i][j]+ " ");}
                                System.out.println("");
    }
    
  }
}
