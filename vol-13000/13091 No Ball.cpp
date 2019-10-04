#include<bits/stdc++.h>
using namespace std;
#define pf printf
int main()
{
    /*freopen( "in.txt" , "r" , stdin);
    freopen( "out.txt" , "w" , stdout);*/
    int t, x, pos, i, j, leg, crease;
    char style;
    string str[6];
    cin>>t;
    getchar();
    for(x=1; x<=t; x++)
    {
        pos=-1;
        for(i=0; i<5; i++)
        {
            cin>>str[i];
            getchar();
            for(j=0; j<5; j++) if(pos<0)
                {
                    if(str[i][j]=='>' || str[i][j]=='<')
                        pos=i;
                }
        }
        //cout<<endl; /// hudai new line chaysilo >_< >_<
        for(i=0; i<5; i++)
        {
            if(str[pos][i]=='|')
                crease = i;
            if(str[pos][i]=='>')
            {
                leg = i;
                style = '>';
            }
            else if(str[pos][i]=='<')
            {
                leg = i;
                style = '<';
            }
        }
        if(style=='<')
        {
            if(crease>leg)
                pf("Case %d: No Ball\n", x);
            else if(crease < leg)
                pf("Case %d: Thik Ball\n", x);
        }
        else if(style=='>')
        {
            if(crease<leg)
                pf("Case %d: No Ball\n", x);
            else if(crease>leg)
                pf("Case %d: Thik Ball\n", x);
        }
    }
    return 0;
}
