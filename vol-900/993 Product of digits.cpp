#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
#define lolo long long
vector <lolo> v;
void calc(lolo n)
{
    v.clear();
    lolo i, x = n, d=9;
    while(d>1)
    {
        while(x%d==0)
        {
            x = x/d;
            v.push_back(d);
        }
        d--;
    }
    if(x==1)
    {
        sort(v.begin(), v.end());
        lolo sz = v.size();
        for(i=0; i<sz; i++)
            cout<<v[i];
    }
    else cout<<-1;
    cout<<endl;
}

int main()
{
    lolo t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<10)
        {
            cout<<n<<endl;
            continue;
        }
        calc(n);
    }
    return 0;
}
