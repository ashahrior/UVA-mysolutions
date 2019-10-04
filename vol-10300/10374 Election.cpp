#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mset(a,b) memset(a,b,sizeof(a))
#define pb(a) push_back(a)
#define pf printf
#define sf scanf
#define LL unsigned long long
#define lolo long long
#define PI acos(-1)
#define rev(a) reverse(a.begin(),a.end())
#define gl(a) getline(cin,a)
#define v_sort(v) sort(v.begin(),v.end())
#define sortt(a,n) sort(a, a+n)
#define transform_down(word) transform(word.begin(), word.end(), word.begin(), ::tolower)
#define transform_up(word) transform(word.begin(), word.end(), word.begin(), ::toupper)

int main()
{
    int i, t, x=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int n;
        cin>>n;
        string nam, party, winner;
        map <string, string> mp1;
        map <string , int> mp2, mp3;
        mp1.clear(), mp2.clear(), mp3.clear();
        while(getchar()!='\n');                 // this line swallows all the extra new lines. had to eat some WAzz for this shit
        while(n--)
        {
            //getchar();
            gl(nam);
            //getchar();
            gl(party);
            mp1[nam] = party;
            mp3[nam] = 1;
        }
        int m, maxi = 0;
        bool tie = 0, flag=0;
        cin>>m;
        while(getchar()!='\n');
        while(m--)
        {
            //getchar();
            gl(nam);
            if(mp3[nam]==1)
            {
                mp2[nam]++;
                if(mp2[nam]>maxi)
                {
                    maxi = mp2[nam];
                    winner = nam;
                    tie = 0;
                    flag = 1;
                }
                if(mp2[nam]==maxi && winner!=nam)
                {
                    tie = 1;
                }
            }
        }
        if(tie || !flag)
            cout<< "tie"<<endl;
        else cout<< mp1[winner] <<endl;
        if(i<t-1)
            cout<<endl;
    }
    return 0;
}
