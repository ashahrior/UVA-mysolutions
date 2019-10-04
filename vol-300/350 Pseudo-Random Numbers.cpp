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
    lolo z, i, m, l, f, x, c=0;
    while(cin>>z>>i>>m>>l)
    {
        if(!z && !i && !m && !l)
            break;
        vector <lolo> v;
        map <lolo, lolo> mp;
        v.clear(), mp.clear();
        v.pb(l);
        x=1;
        while(1)
        {
            l = (z*l+i)%m;
            if(mp[l]==1)
            {
                f = l;
                break;
            }
            else
            {
                mp[l] = 1;
                v.pb(l);
                x++;
            }
        }
        lolo sz = v.size();
        for(lolo j=0; j<sz; j++)
        {
            if(v[j]==f)
                break;
            x--;
        }
        pf("Case %lld: %lld\n", ++c, x);
    }
    return 0;
}

/**
Sample Input
//Z I M  L
7 5 12 4
5173 3849 3279 1511
9111 5309 6000 1234
1079 2136 9999 1237
0 0 0 0
Sample Output
Case 1: 6
Case 2: 546
Case 3: 500
Case 4: 220
*/
