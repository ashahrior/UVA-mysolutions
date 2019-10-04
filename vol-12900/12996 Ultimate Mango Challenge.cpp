#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, given[21], plimit[21];
    cin>>test;
    for(int c=1; c<=test; c++)
    {
        int i, gsum=0, types, mlimit;
        cin>>types>>mlimit;
        for(i=0; i<types; i++)
        {
            cin>>given[i];
            gsum+=given[i];
        }
        for(i=0; i<types; i++)
        {
            cin>>plimit[i];
        }
        if(mlimit<gsum)
        {
            printf("Case %d: No\n", c);
            continue;
        }
        bool flag=1;
        for(i=0; i<types; i++)
        {
            if(plimit[i]<given[i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
            printf("Case %d: Yes\n",c);
        else
            printf("Case %d: No\n",c);
    }
    return 0;
}
