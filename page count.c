/*Sample Input 0

6
2
Sample Output 0

1
Explanation 0

If Brie starts turning from page , she only needs to turn  page:
If Brie starts turning from page , she needs to turn  pages:
because we want to print the minumum number of page turns, we print  as our answer.*/
/****************************************************answer:***************************************************/
int pageCount(int n, int p) {int c=0;
c=p/2;
if(c>(n/2)-(p/2))
{
c=(n/2)-(p/2);
}
    return c;
}
