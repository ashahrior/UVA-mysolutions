#include<bits/stdc++.h>
using namespace std;
#define lolo unsigned long long
int main()
{
    lolo n;
    while(cin>>n &&n)
    {
        lolo a=1;
        while(a<n)
        {
            a*=2;
            a++;
        }
        if(a==n)
            cout<< "Bob\n";
        else
            cout<< "Alice\n";
    }
    return 0;
}
