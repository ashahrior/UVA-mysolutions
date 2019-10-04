#include<bits/stdc++.h>
using namespace std;
#define pf printf
int main()
{
    int b, s, bc[10001] , sp[10001], i, j, mini, dif, left, cs=0;
    while(cin>>b>>s &&b&&s)
    {
        mini = 100;
        for(i=0; i<b; i++)
            cin>>bc[i];
        for(i=0; i<s; i++)
            cin>>sp[i];
        if(b<=s)
        {
            pf("Case %d: 0\n", ++cs);
            continue;
        }
        left = b-s;
        sort(bc, bc+b);
        sort(sp, sp+s);
        for(i=b-1; i>=0; i--)
        {
            for(j=s-1; j>=0; j--)
            {
                if(sp[j]==-1)
                    continue;
                dif = abs(bc[i]-sp[j]);
                if(dif<mini)
                {
                    mini = j;
                }
            }
            sp[mini]=-1;
        }
        pf("Case %d: %d %d\n", ++cs, left, bc[0]);
    }
    return 0;
}
