#include<bits/stdc++.h>
using namespace std;
int main()
{
    int max, len, i, j, freq[130], cnt, k = 0;
    string str;
    while(getline(cin,str))
    {
        if(k!=0)
            printf("\n");
        len = str.size();
        sort(str.begin(), str.end());
        for(i=32; i<=127; i++)
        {
            cnt = 0;
            for(j=0; j<len; j++)
                if(str[j]==i)
                    cnt++;
            freq[i] = cnt;
        }
        max = 0;
        for(i=32; i<=127; i++)
            if(freq[i]>max)
                max = freq[i];
        for(j=1; j<=max; j++)
            for(i=127; i>=32; i--)
                if(freq[i]==j)
                    printf("%d %d\n",i,j);
        k = 1;
    }
    return 0;
}
