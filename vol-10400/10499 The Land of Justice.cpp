#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n && n>-1)
    {
        if(n==1)
            cout<<"0%"<<endl;
        else
            cout<<n*25<<"%"<<endl;
    }
    return 0;
}
