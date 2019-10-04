#include<bits/stdc++.h>
using namespace std;

long double factorial (long double n)
{
    long double r = 1;
    for (long double i = 2; i <= n; i++)
    {
        r *= i;
    }
    return r;
}
int main ()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string str;
    int i, t;
    cin>>t;
    getchar();
    for(int c = 1; c<=t; c++)
    {
        cin>>str;
        //getchar();
        int sz = str.size();
        int ara[sz+5];
        sort(str.begin(),str.end());
        memset(ara,0,sizeof(ara));
        bool flag=0;
        int x=0, count=1, countz=0;
        for(i=1; i<sz; i++)
        {
            if(str[i-1]==str[i])
            {
                if(!flag)
                    countz++;
                count++;
                ara[x] = count;
                flag=1;
            }
            else if(str[i-1]!=str[i] && flag)
            {
                x++;
                count=1;
                flag=0;
            }
        }
        long double up = factorial(sz);
        long double fac = up, res;
        for(i=0; i<countz; i++)
        {
            res = up/factorial(ara[i]);
            fac = res;
            up = res;
        }
        printf("Data set %d: ", c);
        cout<< fixed << setprecision(0) <<fac<<endl;
    }
    return 0;
}

