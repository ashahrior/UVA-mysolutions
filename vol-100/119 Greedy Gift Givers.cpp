#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nl=1, group;
    while(cin>>group)
    {
        string people[group+5], gname, tname;
        map <string, int> lizt;
        int i, give, num, vag, khoroch, j;
        for(i=0; i<group; i++)
        {
            cin>>people[i];
            lizt[people[i]]=0;
        }
        for(i=0; i<group; i++)
        {
            cin>>gname;
            cin>>give>>num;
            if(num!=0)
            {
                vag = give/num;
                khoroch = vag*num;
                for(j=0; j<num; j++)
                {
                    cin>>tname;
                    lizt[tname]+=vag;
                }
                lizt[gname]-=khoroch;
            }
        }
        if(nl!=1)
            cout<<endl;
        nl++;
        for(i=0; i<group; i++)
            cout<<people[i]<<char(32)<<lizt[people[i]]<<endl;
        //cout<<endl;
    }
    return 0;
}
