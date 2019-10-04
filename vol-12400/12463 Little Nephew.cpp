#include<bits/stdc++.h>
using namespace std;
#define lolo unsigned long long
int main()
{
    lolo a, b, c, d, e;
    while(cin>>a>>b>>c>>d>>e &&a &&b &&c &&d &&e)
    {
        lolo result = a*b*c*d*d*e*e;
        cout<<result<<endl;
    }
    return 0;
}
