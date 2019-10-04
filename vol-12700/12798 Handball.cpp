#include<bits/stdc++.h>
using namespace std;
int main()
{
    int play, match;
    while(cin>>play>>match)
    {
        int i, j, goal, goals, count=0;
        for(i=0; i<play; i++)
        {
            goals=0;
            for(j=0; j<match; j++)
            {
                cin>>goal;
                if(goal>0)
                    goals++;
            }
            if(goals==match)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
