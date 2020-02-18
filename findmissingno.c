Find the Missing Number
You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list. 
Write an efficient code to find the missing integer
/***********************************************ans:***********************************************************************/


int main()
{
    int n;scanf("%d",&n);int a[n],res=((10+1)*(10+2))/2;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
       res=res-a[i];
    }
    printf("%d",res);
}
