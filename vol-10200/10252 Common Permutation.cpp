#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000], b[1000];
    int f[150], l1, l2, i, j;
    f[0]=1;
    while(gets(a))
    {
        gets(b);
        l1=strlen(a);
        l2=strlen(b);
        sort(a,a+l1);
        sort(b,b+l2);
        for(i=1; i<150; i++) f[i]=0;
        for(i=0; i<l1; i++)
            f[a[i]-96]++;
        for(i=0; i<l2; i++)
        {
            if(f[b[i]-96])
            {
                printf("%c",b[i]);
                f[b[i]-96]--;
            }
        }
        printf("\n");
    }
    return 0;
}
