#include<bits/stdc++.h>
using namespace std;
#define lolo long long int
int main()
{
    lolo i, hd, nt;
    while(cin>>hd>>nt &&hd &&nt)
    {
        lolo head[hd+1], knight[nt+1];
        for(i=0; i<hd; i++)
        {
            cin>>head[i];
        }
        for(i=0; i<nt; i++)
        {
            cin>>knight[i];
        }
        if(hd>nt)
        {
            printf("Loowater is doomed!\n");
            continue;
        }
        sort(head,head+hd);
        sort(knight,knight+nt);
        if(head[hd-1] > knight[nt-1] )
        {
            printf("Loowater is doomed!\n");
            continue;
        }
        lolo sum=0, hdcount=0, j=0;
        for(i=0; i<nt; i++)
        {
            if(head[j]<=knight[i])
            {
                hdcount++;
                sum+=knight[i];
                j++;
            }
        }
        if(hdcount!=hd)
        {
            printf("Loowater is doomed!\n");
        }
        else
            cout<<sum<<endl;
    }
    return 0;
}
