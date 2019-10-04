#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("playboyin.txt", "r", stdin);
    string country[2005], name[2005];
    int t, i, j;
    cin>>t;
    getchar();
    for(i=0; i<t; i++)
    {
        cin>>country[i];
        getchar();
        getline(cin,name[i]);
    }
    sort(country,country+t);
    for(i=0; i<t; i++)
    {
        int count=0;
        for(j=i;j<t;j++)
        {
            if(country[i]==country[j])
                count++;
            else
                break;
        }
        cout<<country[j-1]<<" "<<count<<endl;
        i = j-1;
    }
    return 0;
}
