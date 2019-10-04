#include<bits/stdc++.h>
using namespace std;
#define lolo long long int
int main()
{
    lolo i, j, m, n, mini;
    lolo nump, budget, hotels, weeks;
    lolo fair, beds;
    while(cin>>nump>>budget>>hotels>>weeks)
    {
        mini = 1000000000;
        for(i=1; i<=hotels; i++)
        {
            cin>>fair;
            for(j=1; j<=weeks; j++)
            {
                cin>>beds;
                if(beds>=nump)
                    mini= min(mini,fair*nump);
            }
        }
        if(mini>budget)
            cout<<"stay home"<<endl;
        else
            cout<<mini<<endl;
    }
    return 0;
}
