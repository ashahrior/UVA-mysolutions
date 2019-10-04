#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen( "in.txt", "r", stdin);
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string str;
        int m=0, f=0, i;
        getline(cin,str);
        //cout<<str<<endl;
        int sz = str.size();
        for(int i=0; i<sz; i++)
        {
            if(str[i]=='M')
                m++;
            else if(str[i]=='F')
                f++;
        }
        //cout<<m<<char(32)<<f<<endl;
        if(m==f && m>1 && f>1)
            cout<< "LOOP"<<endl;
        else
            cout<< "NO LOOP"<<endl;
    }
    return 0;
}
