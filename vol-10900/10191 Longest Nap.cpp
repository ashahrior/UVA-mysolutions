#include<bits/stdc++.h>
using namespace std;

int bestStartTime, bestDuration = 0;
bool available[1082];

void init()
{
    for(int i = 0; i<600; i++)
        available[i] = true;
    available[1081] = true;
}

int conversion(int a, int b)
{
    return (a*60+b);
}

void process()
{
    for(int timeLaps = 600; timeLaps<=1080; i++)
    {
        if(!available[timeLaps])
        {
            int next_time = timeLaps + 1;
            while(!available[next_time] && next_time<1081)
                next_time++;
            if(next_time==1081)
                next_time--;
            if(next_time-timeLaps>bestDuration)
            {
                bestStartTime = timeLaps;
                bestDuration = next_time-timeLaps;
            }
            timeLaps = next_time;
        }
    }
}

int main()
{
    init();
    int t, days = 0;

    while(cin>>t)
    {
        memset(available,0,sizeof(available));
        while(t--)
        {
            int sh, sm, eh, em;
            char tmp;
            string buffer;
            cin>>sh>>tmp>>sm>>eh>>tmp>>em;
            getline(cin,buffer);

            int st = conversion(sh,sm);
            int et = conversion(eh,em);

            for(int i = st; i<et; i++)
                available[i] = true;
        }

        bestDuration = 0;
        process();

        printf("Day #%d: the longest nap starts at %d:%02d and will last for ", ++days, bestStartTime/60, bestStartTime%60);
        int h = bestDuration / 60;
        int m = bestDuration % 60;
        if(h>0)
            cout<< h<< " hours and ";
        cout<< m << " minutes."<<endl;

    }

    return 0;
}

/*
5
10:59 12:41 Meeting with Vinit
11:22 14:26 Meeting with Vinit
10:18 17:49 Meeting with vatsal
10:16 17:03 Meeting with Anjupiter
14:24 17:45 Meeting with Anjupiter

Day #3: the longest nap starts at 10:00 and will last for 16 minutes.
*/
