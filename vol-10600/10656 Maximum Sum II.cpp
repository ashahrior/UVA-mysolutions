#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a[1010], n, i, j;
    while(cin>>t&&t)
    {
        j=0;
        for(i=0; i<t; i++)
        {
            cin>>n;
            if(n)
                a[j++]=n;
        }
        for(i=0; i<j; i++)
        {
            if(i==0)
                cout<<a[i];
            else
                cout<<" "<<a[i];
        }
        if(j==0)
            cout<<"0";
        cout<<endl;
    }
    return 0;
}
