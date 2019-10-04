#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x=0, ara[] = {1,1,2,5,14,42,132,429,1430,4862, 16796};
    while(cin>>n)
    {
        if(x)
            cout<<endl;
        cout<<ara[n]<<endl;
        x=1;
    }
    return 0;
}
