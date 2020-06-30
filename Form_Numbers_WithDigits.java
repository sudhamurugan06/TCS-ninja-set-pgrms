King Tutankhamun
An Egyptian pharaoh of the 18th dynasty, King Tut, as he's famously known as, died at a very young age. He reigned for almost 10 years. The cause of his death and final days still remains a mystery to the world. His mummy was discovered in 1922, almost 30,000 years later his death, by Howard Carter. The box is scribed with 2 strange symbols which is later identified as numbers 3 and 4. Many Archeologists tried to study the box. In 1964 Lord Carnarvon found that it is number series. He need you to generate the number series which consists only 3 and 4. Lord Carnarvon will give a number you have to generate the series upto that number. (It is associated with Binary) 

Input Format : The only line of input contains a single integer N - the N-th in the series to be found.

Input Constraints : 1 <= N <= 10^3

Output Format : The output contains a single integer - The N-th term in the series.

Sample Input :

11
Sample Output :

433
************************************************************************ANSWER******************************************************************************************
import java.util.*;
public class FindNth 
{ 
	// Return n-th number in series made of 4 and 7 
	static int printNthElement(int n) 
	{ 
		// create an array of size (n+1) 
		int arr[] = new int[n+1]; 
		arr[1] = 3; 
		arr[2] = 4; 
	
		for (int i=3; i<=n; i++) 
		{ 
			// If i is odd 
			if (i%2 != 0) 
				arr[i] = arr[i/2]*10 + 3; 
			else
				arr[i] = arr[(i/2)-1]*10 + 4; 
		} 
		return arr[n]; 
	}	 
	
	// main function 
	public static void main (String[] args) 
	{ 
		int n;
		Scanner s=new Scanner(System.in);
		//Scanner s=new Scanner(System.in);
		n=s.nextInt();
		System.out.println(printNthElement(n)); 
	} 
} 
***************************************
import java.util.*;
public class Main{
  public static void main(String []args){
    int n=0,flag=1,c=0;
  Scanner s=new Scanner(System.in);
  n=s.nextInt();
  long x=1,y=0,l=0;
    while(c<n){
      y=x;
  while(y>0){
    l=y%10;
    x=y/10;
    if(l!=3&&l!=4){
      flag=0;
      break;
    }
  }if(flag==1){
    //c++;
System.out.print(x);    
    if(c==n){break;}
  }x++;}
      System.out.print(x);
}}
