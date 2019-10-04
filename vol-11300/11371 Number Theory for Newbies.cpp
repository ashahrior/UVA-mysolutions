#include<bits/stdc++.h>
using namespace std;
#define lolo long long int
int main()
{
    char num1[200], num2[200];
    lolo big, small, i, j, len, sub, k, tag, pos;
    while(cin>>num1)
    {
        getchar();
        len = strlen(num1);
        sort(num1,num1+len);
        j=tag=0;
        for(i=len-1; i>=0; i--)
        {
            num2[j++] = num1[i];
            if(num1[i]=='0' && num1[i+1]!='0')
            {
                tag=1;
                pos = i+1;
            }
        }
        num2[j]='\0';
        big = atoll(num2);
        if(tag==1)
        {
            num1[0] = num1[pos];
            num1[pos] = '0';
        }
        small = atoll(num1);
        sub = big - small;
        k = sub/9;
        cout<<big<< " - "<<small<< " = "<<sub<< " = ";
        cout<< "9 * "<<k<<endl;
    }
    return 0;
}
