#include<bits/stdc++.h>
using namespace std;
int main()
{
    /**freopen( "combo.txt", "r", stdin);
    freopen( "comboout.txt", "w", stdout);**/
    int t, c, i, n, sum, dif, ini, tar;
    string initial, target;
    cin>>t;
    for(c=1; c<=t; c++)
    {
        cin>>n;
        getchar();
        cin>>initial;
        getchar();
        cin>>target;
        getchar();
        sum=dif=0;
        for(i=0; i<n; i++)
        {
            ini = initial[i] - '0';
            tar = target[i] - '0';
            dif = abs(tar-ini);
            if(dif>5)
            {
                sum+= 10 - dif;
            }
            else
                sum+=dif;
        }
        cout<< "Case "<<c<<": "<<sum<<endl;
    }
    return 0;
}
