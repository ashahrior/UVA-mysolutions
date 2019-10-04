#include<bits/stdc++.h>
using namespace std;
#define lolo long long
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    lolo t;
    cin>>t;
    for(lolo c=1; c<=t; c++)
    {
        lolo summ;
        bool flag=0;
        double cash, cash1, cash2, cash3, cash4, sum=0;
        cin>>cash;
        if(cash<=180000)
        {
            printf("Case %lld: 0\n", c);
            flag=1;
            continue;
        }
        cash1 = cash - 180000;
        if(cash1<300000)
        {
            sum = cash1*0.1;
            summ = ceil(sum);
            flag=1;
            if(sum<2000)
            {
                printf("Case %lld: ",c);
                cout<<2000<<endl;
            }
            else
            {
                printf("Case %lld: ",c);
                cout<<summ<<endl;
            }
            continue;
        }
        if(cash1>=300000)
        {
            cash2 = cash1 - 300000;
            sum += 30000;
            if(cash2<400000)
            {
                sum+= cash2*.15;
                summ = ceil(sum);
                flag=1;
                printf("Case %lld: %lld\n", c, summ);
                continue;
            }
        }
        if(cash2>=400000)
        {
            cash3 = cash2 - 400000;
            sum += 60000;
            if(cash3<300000)
            {
                sum+= cash3*.2;
                summ = ceil(sum);
                flag=1;
                printf("Case %lld: %lld\n", c, summ);
                continue;
            }
        }
        if(cash3>=300000)
        {
            cash4 = cash3 - 300000;
            sum+= 60000;
            sum+= cash4*.25;
            summ = ceil(sum);
            printf("Case %lld: %lld\n", c, summ);
        }
    }
    return 0;
}
