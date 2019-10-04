#include<bits/stdc++.h>
using namespace std;
int main()
{
    int fast, slow;
    while(cin>>fast>>slow)
    {
        double d = slow - fast;
        cout<<slow/d<<endl;
        int r = ceil(slow/d);
        cout<<r<<endl;
    }
    return 0;
}
