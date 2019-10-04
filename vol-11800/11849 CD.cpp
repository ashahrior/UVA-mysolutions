#include<bits/stdc++.h>
using namespace std;
#define lolo unsigned long long
int main()
{
    map <lolo,lolo> mp;
    //map <string,lolo> mp; this also works but slows down the process
    lolo m, n, cd, count;
    while(cin>>m>>n &&m&&n)
    {
        //getchar();
        lolo i;
        mp.clear();
        count=0;
        for(i=0; i<m; i++)
        {
            cin>>cd;
            mp[cd]=1;
        }
        for(i=0; i<n; i++)
        {
            cin>>cd;
            if(mp[cd]==1)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
