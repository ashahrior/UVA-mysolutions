#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen( "in.txt", "r", stdin);
    int i, ready,  created[12+1], req[12+1], count=1;
    while(cin>>ready &&ready>-1)
    {
        created[0]=ready;
        for(i=1; i<=12; i++)
            cin>>created[i];
        for(i=0; i<12; i++)
            cin>>req[i];
        cout<<"Case "<<count<<":\n";
        for(i=0; i<12; i++)
        {
            if(created[i]-req[i]>=0)
            {
                created[i+1]+=created[i]-req[i];
                cout<<"No problem! :D"<<endl;
            }
            else
            {
                created[i+1]+=created[i];
                cout<<"No problem. :("<<endl;
            }
        }
        count++;
    }
    return 0;
}

/*
5
3 0 3 5 8 2 1 0 3 5 6 9
0 0 10 2 6 4 1 0 1 1 2 2
-1
*/
