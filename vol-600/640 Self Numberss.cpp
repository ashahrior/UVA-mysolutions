#include<bits/stdc++.h>
using namespace std;
#define lolo long long
bool state[1001000];
lolo digisum(lolo x)
{
    lolo sum=0, num = x;
    while(num!=0)
    {
        sum+= num%10;
        num = num/10;
    }
    return sum+x;
}
int main()
{
    //freopen("out.txt", "w", stdout);
    lolo i, num;
    for(i=1; i<=1000000; i++)
    {
        num = digisum(i);
        state[num] = 1;
        if(!state[i])
            cout<<i<<endl;
    }
    return 0;
}

