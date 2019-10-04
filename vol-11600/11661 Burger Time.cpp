#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen( "in.txt", "r", stdin);
    int n;
    string str;
    while(cin>>n &&n)
    {
        getchar();
        int x=0, pos[n+1], d=-1, r=-1;
        memset(pos,0,sizeof(pos));
        getline(cin,str);
        bool flag=0;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='Z')
            {
                cout<<0<<endl;
                flag=1;
                break;
            }
            else
            {
                if(str[i]=='R')
                {
                    r = i;
                }
                else if(str[i]=='D')
                {
                    d = i;
                }
                if(r!=-1 && d!=-1)
                {
                    pos[x++] = abs(d-r);
                    if(d<r)
                        d=-1;
                    else
                        r=-1;
                }
            }
        }
        if(!flag)
        {
            sort(pos,pos+x);
            cout<<pos[0]<<endl;
        }
    }
    return 0;
}

/**
2
RD
5
..Z..
10
.R......D.
10
.R..Z...D.
10
...D..R...
25
..D...R.RR...DD...D.R...R
0

Output
1
0
7
0
3
2
*/
