#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    unsigned int len, i, sum, c, t;
    cin>>t;
    getchar();
    while(t--)
    {
        gets(s);
        sum=c=0;
        len = strlen(s);
        for(i=0; i<len; i++)
        {
            if(s[i]=='O')
            {
                c++;
                sum+=c;
            }
            else if(s[i]=='X')
                c=0;
        }
        cout<<sum<<endl;
    }
    return 0;
}

/*
Sample Input
5
OOXXOXXOOO
OOXXOOXXOO
OXOXOXOXOXOXOX
OOOOOOOOOO
OOOOXOOOOXOOOOX
Sample Output
10
9
7
55
30
*/
