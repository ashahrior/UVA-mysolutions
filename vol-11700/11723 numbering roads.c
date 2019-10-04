#include<stdio.h>
int main()
{
    int r, n, x, c=0;
    while(scanf("%d%d",&r,&n)==2 && (r!=0&&n!=0))
    {
        c++;
        x = (r-1)/n;
        if(x>26)
                printf("Case %d: impossible\n",c);
        else
            printf("Case %d: %d\n",c,x);
    }
    return 0;
}

/*
Sample Input
8 5
100 2
0 0

Sample Output
Case 1: 1
Case 2: impossible
*/
