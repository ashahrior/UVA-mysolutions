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
    LL l, r, ans;
    while(cin>>l>>r)
    {
        if(!l && !r)
            break;
        ans = r/5 - l/5 + 1;
        cout<<ans<<endl;
    }
    return 0;
}

/**
LL process(LL l, LL r);
LL countzeroes(LL num);
int main()                      /// Time limit
{
    LL l, r, ans;
    while(cin>>l>>r)
    {
        if(!l && !r)
            break;
        ans = process(l,r);
        cout<<ans<<endl;
    }
    return 0;
}

LL process(LL l, LL r)
{
    set <LL> st;
    st.clear();
    for(LL i=l; i<=r; i++)
    {
        LL zero = countzeroes(i);
        st.insert(zero);
    }
    LL sz = st.size();
    return sz;
}
LL countzeroes(LL num)
{
    LL count=0;
    for(LL i=5; i<=num; i*=5)
    {
        count+=(num/5);
    }
    return count;
}
*/
