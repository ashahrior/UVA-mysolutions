#include<bits/stdc++.h>
using namespace std;
#define lolo unsigned long long
void calc();
lolo male[100001], total[100001];

int main()
{
    calc();
    lolo n;
    while(cin>>n &&n!=-1)
    {
        cout<<male[n]<<char(32)<<total[n]<<endl;
    }
    return 0;
}

void calc()
{
    lolo i;
    male[0] = 0, total[0] = 1;
    male[1] = 1, total[1] = 2;
    male[2] = 2, total[2] = 4;
    for(i=3; i<=100001; i++)
    {
        male[i] = total[i-1];
        total[i] = male[i] + male[i-1] + 1;
    }
}

