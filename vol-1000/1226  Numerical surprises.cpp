#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x, i, sz, rem, n, t;
    string str;
    cin>>t;
    for(x=0; x<t; x++)
    {
        cin>>n;
        cin>>str;
        sz = str.size();
        rem=0;
        for(i=0; i<sz; i++)
        {
            rem = (rem*10 + str[i]-48)%n;
        }
        cout<<rem<<endl;
    }
    return 0;
}
