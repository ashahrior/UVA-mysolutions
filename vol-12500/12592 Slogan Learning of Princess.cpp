#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///freopen( "slogan.txt", "r", stdin);
    int t, i, q, j;
    string prince[50], princess[500];
    cin>>t;
    getchar();
    for(i=0; i<t*2; i++)
    {
        getline(cin,prince[i]);
    }

    cin>>q;
    getchar();
    for(i=0; i<q; i++)
        getline(cin,princess[i]);

    for(i=0; i<q; i++)
    {
        for(j=0; j<t*2; j++)
        {
            if(princess[i]==prince[j])
            {
                cout<<prince[j+1]<<endl;
                break;
            }
        }
    }
    return 0;
}
