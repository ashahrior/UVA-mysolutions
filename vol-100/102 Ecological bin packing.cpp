#include<bits/stdc++.h>
using namespace std;
#define lolo long long int
int main()
{
    lolo b[5], g[5], c[5], i, j, l, sum[10], mini, bin;
    char bins[10][10]= {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB", "\0"};
    while(cin>>b[0]>>g[0]>>c[0])
    {
        for(i=1; i<3; i++)
        {
            cin>>b[i]>>g[i]>>c[i];
        }
        j=0, sum[j]=0;
        sum[0] = g[0]+ c[0] + b[1] + g[1] + b[2] + c[2]; ///BCG;
        sum[1] = g[0]+ c[0] + b[1] + c[1] + b[2] + g[2]; ///BGC;
        sum[2] = g[0]+ b[0] + c[1] + g[1] + b[2] + c[2]; ///CBG;
        sum[3] = g[0]+ b[0] + b[1] + c[1] + g[2] + c[2]; ///CGB;
        sum[4] = b[0]+ c[0] + c[1] + g[1] + b[2] + g[2]; ///GBC;
        sum[5] = b[0]+ c[0] + b[1] + g[1] + g[2] + c[2]; ///GCB;
        mini = sum[0];
        bin = 0;
        for(i=1; i<6; i++)
        {
            if(mini>sum[i])
            {
                mini = sum[i];
                bin = i;
            }
        }
        cout<<bins[bin]<<" ";
        cout<<mini<<endl;
    }
    return 0;
}
/*for(i=0; i<6; i++)
    printf("SUM-%lld = %lld\n", i+1, sum[i]);*/
/*if(bin==0) cout<<"BCG ";
    else if(bin==1) cout<<"BGC ";
    else if(bin==2) cout<<"CBG ";
    else if(bin==3) cout<<"CGB ";
    else if(bin==4) cout<<"GBC ";
    else if(bin==5) cout<<"GCB ";*/
