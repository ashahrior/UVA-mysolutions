#include<bits/stdc++.h> /// Combination algo
using namespace std;
#define lolo unsigned long long
lolo C(int up, int loww)
{
    lolo ans=1;
    loww = min(loww,up-loww);
    lolo d = up - loww ;
    for(lolo i=1; i<loww+1; i++)
    {
        ans*=(d+i);
        ans/=i;
    }
    return ans;
}
int main()
{
    lolo up, loww, result;
    while(cin >> up >> loww)
    {
        if(!up && !loww)
            break;

        if(up==loww)
        {
            cout<<1<<endl;
            continue;
        }
        result = C(up,loww);
        cout<<result<<endl;
    }
    return 0;
}
