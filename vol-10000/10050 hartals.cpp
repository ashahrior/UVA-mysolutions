#include<bits/stdc++.h>
using namespace std;
int days[3655]; /// At the beginning all the 3655 days are 0 by default.
                /// 0 indicates that all the days are working days.
void holiday()
{
    int i;
    for(i=1; i<=3655; i++)
    {
        if(i%7==0)
        {
            days[i] = 1;
            days[i-1] = 1; /// 1 indicates that these days are off days
        }
    }
}

int main()
{
    int hartals[3650];
    int para[105];
    int t, c, day, p, i, k, x, j, rep;
    holiday();
    scanf("%d",&t); ///test case
    for(c=1; c<=t; c++)
    {
        scanf("%d",&day); ///days
        scanf("%d",&p); ///parties
        for(i=0; i<p; i++)
            scanf("%d",&para[i]); ///parameters
        rep=k=0;
        for(i=0; i<p; i++)
        {
            x = para[i];
            j=1;
            while(x<=day)
            {
                if(days[x]!=1)
                {
                    hartals[k] = x;
                    k++;
                }
                 j++;
                x = para[i]*j;
            }
        }
        sort(hartals, hartals+k);
        for(i=1; i<k; i++)
        {
          if(hartals[i]==hartals[i-1])
                rep++; ///repeated
        }
        printf("%d\n",k-rep);
    }
    return 0;
}
