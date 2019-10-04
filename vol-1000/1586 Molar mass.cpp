#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen( "massin.txt", "r", stdin);
    int t, i, len, j, sum, num, x, pos;
    double mass;
    string str;
    cin>>t;
    getchar();
    while(t--)
    {
        str="";
        getline(cin,str);
        len = str.size();
        str[len]='\0';
        mass = 0.0;
        if(len==1)
        {
            switch(str[0])
            {
            case 'C':
                mass+=12.01;
                break;
            case 'H':
                mass+=1.008;
                break;
            case 'O':
                mass+=16.00;
                break;
            case 'N':
                mass+=14.01;
                break;
            }
            printf("%.03lf\n", mass);
            continue;
        }
        for(i=0; i<len; i++)
        {
            if(str[i]>='A' && str[i]<='Z' && (str[i+1]<='0' || str[i+1]>='9'))
            {
                switch(str[i])
                {
                case 'C':
                    mass+=12.01;
                    break;
                case 'H':
                    mass+=1.008;
                    break;
                case 'O':
                    mass+=16.00;
                    break;
                case 'N':
                    mass+=14.01;
                    break;
                }
            }
            else if(str[i+1]>='0' && str[i+1]<='9')
            {
                pos=i, j=i+1, sum=num=0;
                while(str[j]>='0' && str[j]<='9' && j<len)
                {
                    sum=str[j]-'0';
                    num = num*10 + sum;
                    j++;
                }
                switch(str[i])
                {
                case 'C':
                    mass+=12.01*num;
                    break;
                case 'H':
                    mass+=1.008*num;
                    break;
                case 'O':
                    mass+=16.00*num;
                    break;
                case 'N':
                    mass+=14.01*num;
                    break;
                }
                x = j;
                i=x-1;
            }
        }
        printf("%.03lf\n", mass);
    }
    return 0;
}
