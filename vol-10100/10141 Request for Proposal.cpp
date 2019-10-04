#include<bits/stdc++.h>
using namespace std;
#define lolo long long
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    lolo c, n, x, p, i, j;
    double compliance, maxx, mp, feats;
    string things, output;
    c=1;
    bool z=0;
    while(cin>>n>>p &&n &&p)
    {
        getchar();
        string name;
        double price;
        x=0, maxx = 0.0, mp=1E37;
        for(i=0; i<n; i++)
            getline(cin,things);
        for(i=0; i<p; i++)
        {
            getline(cin,name);
            cin>>price>>feats;
            //compliance = feats/n;
            if(feats==maxx)
            {
                if(price<mp)
                {
                    mp = price;
                    output = name;
                    feats = maxx;
                    x=0;
                }
            }
            else if(feats>maxx)
            {
                maxx = feats;
                output = name;
                mp = price;
            }
            getchar();
            for(j=0; j<feats; j++)
                getline(cin,things);
        }
        if(z!=0)
            cout<<endl;
        z=1;
        cout<<"RFP #"<<c++<<endl;
        cout<<output<<endl;
    }
    return 0;
}
