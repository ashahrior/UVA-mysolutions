#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, whs, wms, whf, wmf, mhs, mms, mhf, mmf, ws, we, ms, me;
    cin>>t;
    for(i=1; i<=t; i++)
    {
       scanf("%d:%d %d:%d", &whs, &wms, &whf, &wmf);
       scanf("%d:%d %d:%d", &mhs, &mms, &mhf, &mmf);
       ws = whs*60+wms;
       we = whf*60+wmf;
       ms = mhs*60+mms;
       me = mhf*60+mmf;
       if(ms>we || ws>me)
        printf("Case %d: Hits Meeting\n",i);
       else
        printf("Case %d: Mrs Meeting\n",i);
    }
    return 0;
}
