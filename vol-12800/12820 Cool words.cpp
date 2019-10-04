#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[35];
    int c, t, i, j, len, dif, count, cases=1, let[30], flag;
    while(cin>>t)
    {
        count=0;
        getchar();
        for(c=1; c<=t; c++)
        {
            cin>>str;
            getchar();
            len = strlen(str);
            if(len==1)
                continue;
            dif=flag=0;
            for(i=0; i<30; i++)
                let[i]= 0;
            for(j=0; j<len-1; j++)
            {
                if(str[j]!=str[j+1])
                {
                    dif=1;
                    break;
                }
            }
            if(dif==1)
            {
                sort(str,str+len);
                for(j=0; j<len; j++)
                {
                    let[str[j]-97]++;
                }
                sort(let, let+30);
                for(i=0; i<29; i++)
                {
                    if(let[i]!=0 && (let[i]==let[i+1]))
                    {
                        flag++;
                        break;
                    }
                }
                if(flag==0)
                {
                    count++;
                }
            }
        }
        cout<<"Case "<<cases<<": "<<count<<endl;
        cases++;
    }
    return 0;
}
