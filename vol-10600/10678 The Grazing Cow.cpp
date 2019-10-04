#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0)
int main()
{
    int n;
    double r, l, d, a, b;
    cin>>n;
    while(n--)
    {
        cin>>d>>l;
        a = sqrt( (l/2)*(l/2) - (d/2)*(d/2) );
        b = l/2;
        r = PI*a*b;
        cout<<fixed<<setprecision(3)<<r<<endl;
    }
    return 0;
}
