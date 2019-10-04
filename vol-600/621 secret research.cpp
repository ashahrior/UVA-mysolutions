#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int t, l;
    cin>>t;
    getchar();
    while(t--)
    {
        gets(s);
        l = strlen(s);
        if(s[l-1]=='5' && s[l-2]=='3')
            cout<<"-"<<endl;
        else if(s[0]=='9' && s[l-1]=='4')
            cout<<"*"<<endl;
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
            cout<<"?"<<endl;
        else
            cout<<"+"<<endl;
    }
    return 0;
}
