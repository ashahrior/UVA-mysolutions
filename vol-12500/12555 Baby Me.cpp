#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool flag;
    int t, c, sz, i, j, num1, num2;
    string str;
    char s1[10], s2[10];
    cin>>t;
    getchar();
    for(c=1; c<=t; c++)
    {
        flag = 0;
        getline(cin,str);
        sz = str.size();
        for(i=0, j=0; i<sz; i++)
        {
            if(!flag && str[i]>='0' && str[i]<='9')
            {
                s1[j++] = str[i];
                s1[j] = '\0';
            }
            else if(str[i]<'0' || str[i]>'9')
            {
                flag=1;
                j=0;
            }
            if(flag && str[i]>='0' && str[i]<='9')
            {
                s2[j++] = str[i];
                s2[j] = '\0';
            }
        }
        num1 = atof(s1);
        num2 = atof(s2);
        printf("Case %d: %g\n",c, num1*0.5 + num2*0.05);
        str[0] = s1[1] = s2[0] = '\0';
    }
    return 0;
}
