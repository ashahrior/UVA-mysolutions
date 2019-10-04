#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen( "in.txt", "r", stdin);
    //freopen( "out.txt", "w", stdout);
    int n, d, t, sz, c, i, count, ara[30];
    string str;
    cin>>t;
    for(c=1; c<=t; c++)
    {
        count=0;
        cin>>n>>d;
        getchar();
        cin>>str;
        memset(ara,0,sizeof(ara));
        sz = str.size();
        for(i=0; i<sz; i++)
        {
            if(ara[str[i]-'A'])
                count++;
            ara[str[i]-'A']++;
            if(i-d>=0)
                ara[str[i-d]- 'A']--;
        }
        cout<< "Case "<<c<<": "<<count<<endl;
    }
    return 0;
}

