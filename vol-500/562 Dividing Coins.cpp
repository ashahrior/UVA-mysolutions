#include<bits/stdc++.h>
using namespace std;

int state[103][50003];
int n, lim;

int div(int pos, int tot, int val[])
{
    if(pos>n) return 0;

    if(state[pos][tot]!=-1)
        return state[pos][tot];

    int p = 0, q = 0;
    if(tot+val[pos]<=lim)
        p = val[pos] + div(pos+1,tot+val[pos],val);
    q = div(pos+1,tot,val);
    state[pos][tot] = max(p,q);

    return state[pos][tot];
}

int main()
{
    int tst;
    //cin>>tst;
    scanf("%d", &tst);
    while(tst--)
    {
        //cin>>n;
        scanf("%d", &n);
        int val[n+2];
        int sum = 0;
        for(int i = 1; i<=n; i++)
        {
            //cin>>val[i];
            scanf("%d", &val[i]);
            sum+=val[i];
        }
        lim = sum/2;
        memset(state,-1,sizeof(state));
        sum -= (div(1,0,val)*2);
        //cout<<sum<<endl;
        printf("%d\n", sum);
    }
    return 0;
}

/**
Sample Input
2
3
2 3 5
4
1 2 4 6
Sample Output
0
1
*/

