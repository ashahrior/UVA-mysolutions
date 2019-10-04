#include<bits/stdc++.h>
using namespace std;
int gcd(int i, int j)
{
    if(j==0)
        return i;
    return gcd( j , i%j);
}
int main()
{
    int num, i, j, t, s, GCD;
    vector <int> v;
    cin>>t;
    getchar();
    while(t--)
    {
        char line[1050];
        gets(line);
        stringstream ss;
        ss<<line;
        while( ss>>num )
            v.push_back(num);
        s = v.size();
        GCD = 0;
        for(i=0; i<s; i++)
        {
            for(j=i+1; j<s; j++)
                GCD = max(GCD, gcd(v[i],v[j]));
        }
        v.clear();
        cout<<GCD;
        cout<<endl;
    }
    return 0;
}
