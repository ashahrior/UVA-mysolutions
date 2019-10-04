#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, ara[20], i, j, p, maxx, cases=1;
    while(cin>>n)
    {
        maxx=0;
        for(i=0; i<n; i++)
            cin>>ara[i];
        for(i=0; i<n; i++)
        {
            p=1;
            for(j=i; j<n && p; j++)
            {
                p*=ara[j];
                if(p>maxx)
                    maxx=p;
            }
        }
        cout<< "Case #"<<cases++<<": The maximum product is "<<maxx<<"."<<endl<<endl;
    }
    return 0;
}
