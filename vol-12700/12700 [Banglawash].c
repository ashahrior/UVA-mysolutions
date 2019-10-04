#include<stdio.h>
int main()
{
    char m[15];
    int t, n, i, j, b, w, a, T;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        b=0, a=0, T=0, w=0;
        scanf("%d", &n);
        for(j=0; j<n; j++)
        {
            scanf("%c", &m[j]);
            if(m[j]==10)
            {
                j--;
            }
        }
        for(j=0; j<n; j++)
        {
            if(m[j]==66)
            {
                b++;
            }
            else if(m[j]==87)
            {
                w++;
            }
            else if(m[j]==84)
            {
                T++;
            }
            else if(m[j]==65)
            {
                a++;
            }
        }
        if(b>w && w==0 && T==0)
        {
            printf("Case %d: BANGLAWASH\n",i);
        }
        else if(w>b && b==0 && T==0)
        {
            printf("Case %d: WHITEWASH\n",i);
        }
        else if(b-w>0 && (w!=0 || w==0) && (T!=0 || T==0) && (a!=0 || a==0))
        {
            printf("Case %d: BANGLADESH %d - %d\n",i, b, w);
        }
        else if(w-b>0 && (b!=0 || b==0) && (T!=0 || T==0) && (a!=0 || a==0))
        {
            printf("Case %d: WWW %d - %d\n",i, w, b);
        }
        else if(w==0 && b==0 && T==0)
        {
            printf("Case %d: ABANDONED\n", i);
        }
        else if(w==b)
        {
            printf("Case %d: DRAW %d %d\n",i, w, T);
        }
    }
    return 0;
}
