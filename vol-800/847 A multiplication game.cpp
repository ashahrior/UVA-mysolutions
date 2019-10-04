#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long lolo;
int main()
{
    double n;
    lolo i;
    while(cin>>n)
    {
        for(i=1;;i++)
        {
            if(i%2)
                n/=9;
            else
                n/=2;
            if(n<=1)
                break;
        }
        if(i%2)
            cout<<"Stan wins."<<endl;
        else
            cout<< "Ollie wins."<<endl;
    }
    return 0;
}

/**
Stan wins.
Ollie wins.**/
