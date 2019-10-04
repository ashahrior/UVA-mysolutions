#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    int t, i, tic, pos, n;
    while(cin>>t &&t)
    {
        for(int c=1; c<=t; c++)
        {
            pos = 0, tic=0;
            for(i=0; i<5; i++)
            {
                cin>>n;
                if(n<=127)
                {
                    tic++;
                    pos = i;
                }
            }
            if(tic==1)
                cout<<char(pos+65)<<endl;
            else
                cout<< "*"<<endl;
        }
    }
    return 0;
}
