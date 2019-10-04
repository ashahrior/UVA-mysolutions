#include<bits/stdc++.h>
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

int main()
{
    int t, c, n, num, i, val;
    map<int,int> mp;
    cin>>t;
    for(c=1; c<=t; c++)
    {
        cin>>n;
        mp.clear();
        val=0;
        bool flag=true;
        for(i=0; i<n*n; i++)
        {
            cin>>num;
            val = mp[num]++;
            //cout<<num<< " "<<val<<endl;
            if(val==n)
                flag = false;
        }
        pf("Case %d: ",c);
        if(flag)
            cout<< "yes"<<endl;
        else
            cout<< "no\n";
    }
    return 0;
}

/**
Sample Input
4
4
2 1 1 3
3 1 2 6
2 6 10 3
9 8 7 6
3
1 1 2
1 1 1
2 2 2
3
1 1 2
2 2 3
3 3 2
3
1 2 3
2 3 1
3 1 2

Sample Output
Case 1: yes
Case 2: no
Case 3: no
Case 4: yes
*/
