#include<bits/stdc++.h>
using namespace std;
#define lolo long long int
lolo N[110];
void feynman()
{
    lolo i, j;
    N[1] = 1;
    N[2] = 5;
    for(i=3; i<=110; i++)
    {
        N[i] = N[i-1] + i*i;
    }
}
int main()
{
    lolo n;
    feynman();
    while(cin>>n&&n)
    {
        cout<<N[n]<<endl;
    }
    return 0;
}
