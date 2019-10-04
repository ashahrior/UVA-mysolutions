#include<bits/stdc++.h> /// rank: 149 using cin ; rank: 26 using scanf
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
#define LL unsigned long long
#define lolo long long
int main()
{
    read();
    //write();
    lolo t, key, doors, d, k, r;
    cin>>t;
    scanf("%lld",&t);
    while(t--)
    {
        //cin>>key>>doors;
        scanf("%lld%lld",&key, &doors);
        if(key==1 && doors==1)
        {
            //cout<<1<<endl;
            printf("1\n");
            continue;
        }
        d = doors-1, k = doors-key-1;
        r = d*doors - k*(k+1);
        r/=2;
        //cout<<r<<endl;
        printf("%lld\n", r);
    }

    return 0;
}
