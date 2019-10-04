#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);

    double well, initial, downfall, fatigue;
    while(cin>>well>>initial>>downfall>>fatigue &&well &&initial &&downfall &&fatigue)
    {
        double fat, slideh, climbed, total, climbing, cslideh;
        int day=1;

        fat = initial*(fatigue/100);
        slideh = 0;
        while(1)
        {
        	cslideh = slideh;
        	total = cslideh + initial;
        	if(total>well)
            {
                cout<< "success on day "<<day<<endl;
                break;
            }
			slideh = total - downfall;
			initial = initial - fat;
			if(initial<0)
                initial=0;

            if(slideh<0)
            {
                cout<< "failure on day "<<day<<endl;
                break;
            }
            day++;
        }
    }
    return 0;
}
