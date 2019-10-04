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
    char str[30];
    double hh=0, mm=0, ss=0, v=0, dis = 0, current = 0, prev = 0;
    while(sf("%s",str)!=EOF)
    {
        sscanf(str,"%lf:%lf:%lf", &hh, &mm, &ss);
        current = hh*3600 + mm*60 + ss;
        dis += (fabs(current - prev) * (v/3600));
        char ch = getchar();
        if(ch==' ')
            cin>>v;
        else if(ch=='\n')
        {
            cout<<str;
            pf(" %.02lf km\n", dis);
        }
        prev = current;
    }
    return 0;
}

/**
Sample Input
00:00:01 100
00:15:01
00:30:01
01:00:01 50
03:00:01
03:00:05 140

Output for Sample Output
00:15:01 25.00 km
00:30:01 50.00 km
03:00:01 200.00 km
*/
