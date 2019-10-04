#include<bits/stdc++.h>
using namespace std;
#define sizze 1048576
int main()
{
    char str[sizze]="", a, b;
    char xxx[100];
    int t, i, j, n;
    cin>>t;
    while(t--)
    {
        cin>>str;
        cin>>n;
        for(i=65; i<96; i++)
            xxx[i]=i;
        for(i=1; i<=n; i++)
        {
            cin>>a;
            getchar();
            cin>>b;
            for(j='A'; j<='Z'; j++)
            {
                if(xxx[j]==b)
                    xxx[j]=a;
            }
        }
        for(i=0; str[i]; i++)
            cout<<xxx[str[i]];
        cout<<endl;
    }
    return 0;
}



/* This got a time limit :p
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen( "babybooin.txt", "r", stdin);
    //freopen( "babybooout.txt", "w", stdout);
    int t, n, i, len, j;
    char m, r;
    string str;
    cin>>t;
    getchar();
    while(t--)
    {
        cin>>str;
        len = str.size();
        cin>>n;
        getchar();
        for(i=0; i<n; i++)
        {
            cin>>m;
            getchar();
            cin>>r;
            for(j=0; j<len; j++)
            {
                if(str[j]==r)
                {
                    str[j] = m;
                }
            }
        }
        cout<<str<<endl;
    }
    return 0;
}
*/
