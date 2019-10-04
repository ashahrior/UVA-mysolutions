#include<bits/stdc++.h>
using namespace std;
#define lolo long long
int main()
{
    //vector <lolo> x; //using vector slows down the process
    //vector <lolo> y;
    lolo test;
    while(cin>>test &&test)
    {
        //x.clear(), y.clear();
        lolo i, m, n;
        lolo x[test+5], y[test+5];
        for(i=0; i<test; i++)
        {
            /*cin>>m>>n;
            x.push_back(m);
            y.push_back(n);*/
            cin>>x[i]>>y[i];
        }
        /*sort(x.begin(),x.end());
        sort(y.begin(), y.end());*/
        sort(x,x+test);
        sort(y,y+test);
        bool flag=0;
        for(i=0; i<test; i++)
        {
            if(x[i]!=y[i])
            {
                flag=1;
                cout<< "NO"<<endl;
                break;
            }
        }
        if(!flag)
            cout<< "YES"<<endl;
    }
    return 0;
}
