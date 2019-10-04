#include<bits/stdc++.h>
using namespace std;
struct sparrow
{
    string sub;
    int days;
};
int main()
{
    //freopen( "homework.txt", "r", stdin );
    int t, i, n, pos, j, limit, flag;
    string ass;
    struct sparrow sp[1000];
    cin>>t;
    for(i=1; i<=t; i++)
    {
        flag=0;
        cin>>n;
        getchar();
        for(j=0; j<n; j++)
            cin>>sp[j].sub>>sp[j].days;
        /*for(j=0; j<n; j++)
            cout<<sp[j].sub<< " " <<sp[j].days<<endl;*/
        cin>>limit;
        getchar();
        cin>>ass;
        for(j=0; j<n; j++)
        {
            if(ass==sp[j].sub)
            {
                flag=1;
                pos = sp[j].days;
                break;
            }
        }
        if(flag)
        {
            if(pos<=limit)
                cout<<"Case "<<i<<": Yesss"<<endl;
            else if(pos<=(limit+5))
                cout<<"Case "<<i<<": Late"<<endl;
            else
                cout<<"Case "<<i<<": Do your own homework!"<<endl;
        }
        else
            cout<<"Case "<<i<<": Do your own homework!"<<endl;
    }
    return 0;
}
