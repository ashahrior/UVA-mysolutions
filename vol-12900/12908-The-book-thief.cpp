#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,sum,num;
    while(scanf("%lld",&num) == 1 && num!=0)
    {
        sum = 0;
        for(i = 1; i>0; i++)
        {
            sum+=i;
            if(sum>num)
                break;
        }
        printf("%lld %lld\n",sum - num,i);
    }
}

/**
#include<bits/stdc++.h> /// this is getting TL because of cin and cout
using namespace std;
#define lolo long long int
int main()
{
    lolo n;
    while(cin>>n &&n)
    {
        lolo i, sum=0;
        for(i=1; ; i++)
        {
            sum+=i;
            if(sum>n)
                break;
        }
        cout<<(sum-n)<<char(32)<<i<<endl;
    }
    return 0;
}
*/
