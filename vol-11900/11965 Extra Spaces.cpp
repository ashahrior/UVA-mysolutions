#include<bits/stdc++.h>      /// This shit got me a lot of PEzzz -_- but got accepted eventually
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
#define mset(a) memset(a,-1,sizeof(a))
#define pb(a) push_back(a)
#define pf printf
#define sf scanf
#define LL unsigned long long
#define lolo long long
#define PI acos(-1)
#define rev(a) reverse(a.begin(),a.end())
#define gl(a) getline(cin,a)

int main()
{
    int t, n, c=1, i, j;
    bool sp, blank=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        getchar();
        if(blank)
            cout<<endl;
		blank=1;
        pf("Case %d:\n", c++);
        for(i=0; i<n; i++)
        {
			string sample;
			gl(sample);
			sp=0;
            for(j=0; sample[j]; j++)
            {
                if(sample[j]==32)
                {
                	if(!sp)
                		cout<<sample[j];
                    sp=1;
                }
                else if(sample[j]!=32)
                {
                    cout<<sample[j];
                    sp=0;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
