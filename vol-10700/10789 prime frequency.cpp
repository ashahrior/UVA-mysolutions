#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
#define mset(a) memset(a,-1,sizeof(a))
#define pb(a) push_back(a)
#define pf printf
#define sc scanf
#define LL unsigned long long
#define lolo long long
int prime(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    int sq = sqrt(n);
    for(int x=3; x<=sq; x+=2)
    {
        if(n%x==0)
            return 0;
    }
    return 1;
}
int main()
{
    //read();
    int t, c, len, i, j, check, full, f[80], pal[205];
    string str;
    cin>>t;
    for(c=1; c<=t; c++)
    {
        mclr(f);
        cin>>str;
        getchar();
        len = str.size();
        for(i=0; i<len; i++)
        {
            if(str[i]>='0' && str[i]<= '9')
                f[str[i]-48]++;
            else if(str[i]>='A' && str[i]<= 'Z')
                f[str[i]-55]++;
            else if(str[i]>='a' && str[i]<= 'z')
                f[str[i]-61]++;
        }
        j=full=0;
        for(i=0; i<70; i++)
        {
            check = prime(f[i]);
            if(check)
            {
                if(i>=0 && i<=9)
                    pal[j++] = i+48;
                else if(i>=10 && i<=35)
                    pal[j++] = i+55;
                else if(i>=36 && i<=62)
                    pal[j++] = i+61;
                full=1;
            }
        }
        pal[j]='\0';
        sort(pal,pal+j);
        if(!full)
            cout<<"Case "<<c<<": empty"<<endl;
        else
        {
            cout<<"Case "<<c<<": ";
            for(i=0; i<j; i++)
                printf("%c", pal[i]);
            cout<<endl;
        }
    }
    return 0;
}
