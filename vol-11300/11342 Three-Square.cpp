#include<bits/stdc++.h>
using namespace std;
#define sizee 50000
#define lolo long long
int main()
{
    lolo i, j, k, sum, ara[sizee+3][3]={0};
    for(i=0; i*i<=sizee; i++)
    {
        for(j=i; i*i+j*j <=sizee; j++)
        {
            for(k=j; i*i+j*j+k*k <=sizee; k++)
            {
                sum = i*i+j*j+k*k;
                if(!ara[sum][0] && !ara[sum][1] && !ara[sum][2])
                {
                    ara[sum][0] = i, ara[sum][1] = j, ara[sum][2] = k ;
                }
            }
        }
    }
    lolo test, num;
    cin>>test;
    while(test--)
    {
        cin>>num;
        if( !ara[num][0] && !ara[num][1] && !ara[num][2] )
            cout<<-1<<endl;
        else
            cout<<ara[num][0]<<" "<<ara[num][1]<< " "<<ara[num][2]<<endl;
    }
    return 0;
}
