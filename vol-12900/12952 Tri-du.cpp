#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        if(m>n)
            cout<<m<<endl;
        else if(m<n)
            cout<<n<<endl;
        else if(m==n)
            cout<<m<<endl;
    }
    return 0;
}
