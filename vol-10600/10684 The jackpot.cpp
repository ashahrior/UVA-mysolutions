#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, num, diff, maxi, i, j;
    while(cin>>n&&n)
    {
        maxi=diff=0;
        for(i=0; i<n; i++)
        {
            cin>>num;
            diff+=num;
            if(diff<0) diff=0;
            if(diff>maxi)
                maxi=diff;
        }
        if(maxi<=0)
            cout<< "Losing streak."<<endl;
        else
            cout<< "The maximum winning streak is "<<maxi<<"."<<endl;
    }
    return 0;
}
