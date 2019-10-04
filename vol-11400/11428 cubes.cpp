#include<bits/stdc++.h>
using namespace std;
#define lolo long long int
int main()
{
    lolo num, i, j, x, yes, NUM[1000];
    while(cin>>num&&num)
    {
        yes=1;
        for(i=1; i<=sqrt(num); i++)
        {
            if(i*i*i>num)
            {
                for(j=1; j<i; j++)
                {
                    if( num == ((i*i*i)-(j*j*j)) )
                    {
                        cout<<i<<" "<<j<<endl;
                        yes=0;
                        break;
                    }
                }
                if(yes==0)
                break;
            }
        }
        if(yes!=0)
            cout<<"No solution"<<endl;
    }
    return 0;
}

