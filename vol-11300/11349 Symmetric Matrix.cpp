#include<bits/stdc++.h>
using namespace std;
#define lolo long long
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int i, t;
    cin>>t;
    for(int c=1; c<=t; c++)
    {
        getchar();
        int n, tag=0;
        char z;
        scanf("N = %d",&n);
        int rev = n*n-1;
        int sz = n*n-1;
        lolo a[sz+1], b[sz+1];
        for(i=0; i<=sz; i++)
        {
            cin>>a[i];
            b[rev--] = a[i];
        }
        bool sym = 0;

        for(i=0; i<=sz; i++)
        {
            if(a[i]!=b[i] || a[i]<0)
            {
                sym=1;
                break;
            }
        }
        if(sym==0)
            printf("Test #%d: Symmetric.\n", c);
        else
            printf("Test #%d: Non-symmetric.\n", c);
    }
    return 0;
}

/** this got me lots of WAzzzz
#include<bits/stdc++.h>
using namespace std;
#define lolo long long
int main()
{
    int t;
    cin>>t;
    for(int c=1; c<=t; c++)
    {
        getchar();
        int n, tag=0;
        char z;
        scanf("N = %d",&n);

        //cin>>z>>z>>n;
        lolo ara[n][n];
        int i, j, x, y;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>ara[i][j];
                if(ara[i][j]<0)
                {
                    tag=1;
                }
            }
        }
        if(tag)
        {
            printf("Test #%d: Non-symmetric.\n", c);
            continue;
        }
        bool sym = 0;
        for(i=0, x=n-1; i<n/2; i++, x--)
        {
            for(j=0, y=n-1; j<n; j++, y--)
            {
                if(ara[i][j]!=ara[x][y])
                {
                    sym=1;
                    break;
                }
            }
        }
        if(sym==0)
            printf("Test #%d: Symmetric.\n", c);
        else
            printf("Test #%d: Non-symmetric.\n", c);
    }
    return 0;
}
**/
