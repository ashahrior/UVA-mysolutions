#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i;
    while(cin>>n)
    {
        for(i=0; ; i++)
        {
            if(pow(2,i)>n)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
