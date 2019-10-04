#include<bits/stdc++.h> ///accepted rank: 167
using namespace std;
#define lolo unsigned long long
bool func(string str, int ssz, int num)
{
    lolo rem=0;
    for(int i=0; i<ssz; i++)
    {
        rem = rem*10+(str[i]-48);
        rem = rem%num;
    }
    if(rem)
        return 0;
    else
        return 1;
}
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string str;
    int t, n, i, strz, num, count;
    cin>>t;
    while(t--)
    {
        getchar();
        getline(cin,str);
        cin>>n;
        strz = str.size();
        bool ok=1;
        for(i=0; i<n; i++)
        {
            cin>>num;
            if(!ok)
                continue;
            ok = func(str, strz, num);
        }
        cout<<str;
        if(ok)
            printf(" - Wonderful.\n");
        else
            printf(" - Simple.\n");
    }
    return 0;
}
