#include<bits/stdc++.h>
using namespace std;
int main()
{
    char letter[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char in[1000];
    int f[26] = {0};
    int i, t, n, maxx=0, j, l;
    while(scanf("%d",&n))
    {
        getchar();
        for(t=1; t<=n; t++)
        {
            gets(in);
            l = strlen(in);
            for(i=0; i<l; i++)
            {
                if(in[i]>='a' && in[i]<='z')
                {
                    f[in[i]-97]++;
                    if(f[in[i]-97]>maxx)
                        maxx = f[in[i]-97];
                }
                else if(in[i]>='A' && in[i]<='Z')
                {
                    f[in[i]-65]++;
                    if(f[in[i]-65]>maxx)
                        maxx = f[in[i]-65];
                }
            }
        }
        for(i=maxx; i>=1; i--)
        {
            for(j=0; j<=25; j++)
            {
                if(f[j]==i)
                    printf("%c %d\n", letter[j], i);
            }
        }
    }
    return 0;
}
