#include<bits/stdc++.h>
using namespace std;
#define lolo long long
int main()
{
    //freopen( "in.txt", "r", stdin);
    //freopen( "out.txt", "w", stdout);
    lolo players, rounds;
    while(cin>>players>>rounds)
    {
        lolo i, j, bank, pl[rounds+1][players+1], bonus=0, asum, sum, extra;
        for(i=0; i<rounds; i++)
        {
            asum=sum=extra=0;
            cin>>bank;
            for(j=0; j<players; j++)
            {
                cin>>pl[i][j];
                sum+=pl[i][j];
            }
            asum = sum - pl[i][0];
            if(asum < bank)
            {
                if(asum+1<=bank)
                {
                    extra = 1;
                }
                if(asum+10<=bank)
                {
                    extra = 10;
                }
                if(asum+100<=bank)
                {
                    extra = 100;
                }
                if(asum+1000<=bank)
                {
                    extra = 1000;
                }
                if(asum+10000<=bank)
                {
                    extra = 10000;
                }
                lolo num = pl[i][0];
                if(extra>=num)
                    bonus = bonus + abs(num - extra);
                else
                    bonus+=extra;
            }
        }
        cout<<bonus<<endl;
    }
    return 0;
}
