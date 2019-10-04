#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    int t, a, b, c, d, w, x, y, z, i;
    //cin>>t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        //cin>>a>>b>>c>>d;
        //cin>>w>>x>>y>>z;
        scanf("%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &w, &x, &y, &z);
        getchar();
        if(a==w && b==x && c==y && d==z)
            printf("Case #%d: POSSIBLE\n", i);
        else if(a==y && b==w && c==z && d==x)
            printf("Case #%d: POSSIBLE\n", i);
        else if(a==z && b==y && c==x && d==w)
            printf("Case #%d: POSSIBLE\n", i);
        else if(a==x && b==z && c==w && d==y)
            printf("Case #%d: POSSIBLE\n", i);
        else
            printf("Case #%d: IMPOSSIBLE\n", i);
    }
    return 0;
}
