#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen( "out.txt", "w", stdout);

    int i, sum, p=131071 ;
    char ch;
    while(1)
    {
        string str;
        //str.clear();
        str = "";
        for(i=0 ;; i++)
        {
            /**if((ch = getchar())==EOF)
                return 0;*/
            if(scanf(" %c",&ch)==EOF)
                return 0;
            else if(ch== '#')
                break;
            else
                str+=ch;
        }
        int sz = str.size();
        sum=0;
        for(i=0; i<sz; i++)
        {
            sum = sum*2;
            sum += str[i]-48;
            sum = sum% p;
        }
        if(!sum)
            cout<< "YES"<<endl;
        else
            cout<< "NO"<<endl;
        //getchar();
    }
    return 0;
}
