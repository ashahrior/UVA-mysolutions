#include<bits/stdc++.h>
using namespace std;
map<long long, long long> mp;
void calc()
{
    mp[1] = 1, mp[64] = 1, mp[729] = 1, mp[4096] = 1, mp[15625] = 1, mp[46656] = 1;
    mp[117649] = 1, mp[262144] = 1, mp[531441] = 1, mp[1000000] = 1;
    mp[1771561] = 1, mp[2985984] = 1;
    mp[4826809] = 1, mp[7529536] = 1, mp[11390625] = 1, mp[16777216] = 1, mp[24137569] = 1;
    mp[34012224] = 1, mp[47045881] = 1, mp[64000000] = 1, mp[85766121] = 1;
    //map<int,int>:: iterator it;
    //for(it = mp.begin(); it!=mp.end(); it++)
        //cout<< (*it).first<< " "<< (*it).second<<endl;
}

int main()
{
    calc();
    long long num;
    while(cin>>num && num)
    {
        if(mp[num])
            cout<< "Special"<<endl;
        else
            cout<< "Ordinary"<<endl;
    }
    return 0;
}

/**
Sample Input
1
2
64
100
15625
0

Sample Output
Special
Ordinary
Special
Ordinary
Special
*/

/*
1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,
1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,
47045881, 64000000 and 85766121.*/
