#include<bits/stdc++.h>
using namespace std;
#define lolo long long int
lolo gen[85];
void generation()
{
    lolo i, sum=2;
    gen[0] = 0, gen[1] = 1, gen[2]=2, gen[3] = 3;
    for(i=4; i<=85; i++)
    {
        gen[i] = gen[i-2] + gen[i-1];
    }
}
int main()
{
    lolo g;
    generation();
    while(scanf("%lld",&g)==1 &&g)
    {
        printf("%lld\n", gen[g]);
    }
    return 0;
}
