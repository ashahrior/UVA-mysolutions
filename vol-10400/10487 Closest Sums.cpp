#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mset(a,b) memset(a,b,sizeof(a))
#define pb(a) push_back(a)
#define pf printf
#define sf scanf
#define LL unsigned long long
#define lolo long long
#define PI acos(-1)
#define rev(a) reverse(a.begin(),a.end())
#define gl(a) getline(cin,a)
#define v_sort(v) sort(v.begin(),v.end())
#define sortt(a,n) sort(a, a+n)
#define transform_down(word) transform(word.begin(), word.end(), word.begin(), ::tolower)
#define transform_up(word) transform(word.begin(), word.end(), word.begin(), ::toupper)

int main()
{
    read();
    int c=0, n;
    while(cin>>n)
    {
        if(!n) break;
        int i, ara[n+1];
        for(i=0; i<n; i++)
            cin>>ara[i];
        sortt(ara,n);
        int q;
        cin>>q;
        int qq[q+1];
        for(i=0; i<q; i++)
            cin>>qq[i];
        int j, k, sum, d, r, mini;
        pf("Case %d:\n", ++c);
        vector <int> v;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                sum = ara[i] + ara[j];
                v.pb(sum);
            }
        }
        int sz = v.size();
        /*for(i=0; i<sz; i++)
            cout<< v[i]<< " ";
        cout<<endl;*/
        for(i=0; i<q; i++)
        {
            lolo mini = 10000000000;
            for(j=0; j<sz; j++)
            {
                d = abs(qq[i]-v[j]);
                //cout<<qq[i]<< " "<< v[j]<< " "<< d<<endl;
                if(d<mini)
                {
                    mini = d;
                    r = v[j];
                }
            }
            pf("Closest sum to %d is %d.\n", qq[i], r);
        }
    }
    return 0;
}

/**
Sample input
5
3
12
17
33
34
3
1
51
30
0
Sample output
Case 1:
Closest sum to 1 is 15.
Closest sum to 51 is 51.
Closest sum to 30 is 29.
*/
