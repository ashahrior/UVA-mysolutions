#include<bits/stdc++.h>
using namespace std;
#define lolo long long int
int main()
{
    lolo n, r, sq;
    while(scanf("%lld",&n)==1 &&n)
    {
        sq = sqrt(n);
        r = sq*sq;
        if(r==n)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
