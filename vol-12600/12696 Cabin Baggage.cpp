///maximum length of 56 cm, width of 45 cm and depth of 25cm
///maximum weight 7kg
///(length+width+depth) should not exceed 125 cm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, al=0, c;
    double ln, wd, dp, wt, sum;
    scanf("%d",&t);
    for(c=1; c<=t; c++)
    {
        sum=0;
        scanf("%lf%lf%lf%lf",&ln, &wd, &dp, &wt);
        if(wt>7)
            printf("0\n");
        else if(ln<=56 && wd<=45 && dp<=25)
        {
            printf("1\n");
            al++;
        }
        else
        {
            sum = ln + wd + dp;
            if(sum>125)
                printf("0\n");
            else
            {
                printf("1\n");
                al++;
            }
        }
    }
    printf("%d\n",al);
    return 0;
}
