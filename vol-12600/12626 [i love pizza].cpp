#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    char pizza[700];
    int counter[50];
    int i1, len, m, a, r, g, i, t, n, x, minimum;
    scanf("%d",&n);
    for(x=1; x<=n; x++)
    {
        gets(pizza);
        len = strlen(pizza);
        if(len==0)
        {
            x--;
            continue;
        }
        m=0, a=0, r=0, g=0, i=0, t=0;
        for(i1=0; i1<len; i1++)
        {
            if(pizza[i1]=='M')
                m++;
            else if(pizza[i1]=='A')
                a++;
            else if(pizza[i1]=='R')
                r++;
            else if(pizza[i1]=='G')
                g++;
            else if(pizza[i1]=='I')
                i++;
            else if(pizza[i1]=='T')
                t++;
        }
        a = a / 3;
        r = r / 2;
        counter[0] = m, counter[1] = a, counter[2] = r;
        counter[3] = g, counter[4] = i, counter[5] = t;
        sort(counter, counter+6);
        minimum = counter[0];
        printf("%d\n",minimum);
    }
    return 0;
}
