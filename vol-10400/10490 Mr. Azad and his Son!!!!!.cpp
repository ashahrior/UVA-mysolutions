#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long lolo;
int prime[] = {2,3,5,7,11,13,17,19,23,29,31};
int main()
{
    lolo n, i, x, flag;
    while(cin>>n &&n)
    {
        flag=0;
        for(i=0; i<11; i++)
        {
            if(n==prime[i])
                flag=1;
        }
        if(flag)
        {
            if(n==11 || n==23 || n==29)
                cout<< "Given number is prime. But, NO perfect number is available."<<endl;
            else
            {
                x = pow(2,n-1)*(pow(2,n)-1);
                cout<< "Perfect: "<<x<<"!"<<endl;
            }
        }
        else
            cout<< "Given number is NOT prime! NO perfect number is available."<<endl;
    }
    return 0;
}
