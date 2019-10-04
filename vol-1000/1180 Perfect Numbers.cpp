#include<bits/stdc++.h>
using namespace std;
typedef long long lolo;
lolo prime(lolo i)
{
    if(i==1)
        return 0;
    if(i==2)
        return 1;
    if(i%2==0)
        return 0;
    int sq = sqrt(i);
    for(int x=3; x<=sq; x+=2)
    {
        if(!(i%x))
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    ///freopen( "perfect.txt", "r", stdin );
    lolo n, i, p, x;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>p;
        getchar();
        if(prime(p))
        {
            x = pow(2,p)-1;
            if(prime(x))
                cout<< "Yes"<<endl;
            else
                cout<< "No"<<endl;
        }
        else
            cout<< "No"<<endl;
    }
    return 0;
}
