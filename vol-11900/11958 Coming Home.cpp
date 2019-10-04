#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, x;
    cin>>t;
    for(x=1; x<=t; x++)
    {
        int n, hs, ms, dur, t1, t2, j, h, m, time;
        scanf("%d%d:%d", &n,&hs,&ms);
        t1 = hs*60+ms;
        int mini = 10000000;
        for(j=0; j<n; j++)
        {
            scanf("%d:%d%d", &h, &m, &dur);
            t2 = h*60+m;
            if(t2<t1)
                t2+=1440;
            time = t2 - t1 + dur;
            if(time<mini)
                mini = time;
        }
        printf("Case %d: ", x);
        cout<<mini<<endl;
    }
    return 0;
}
