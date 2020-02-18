Given a set of numbers where all elements occur even number of times except one number, find the odd occurring number”?????................

/*************************************************ans:**************************************************************/
int main()
{
    int n;scanf("%d",&n);int a[n],res=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        res=res^a[i];
    }
    printf("%d",res);
