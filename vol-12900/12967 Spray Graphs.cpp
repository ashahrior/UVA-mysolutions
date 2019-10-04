#include<bits/stdc++.h>
using namespace std;

long long stat[50];

void precal()
{
    int i;
    stat[1] = 1;
    stat[2] = 4;
    for(i=3; i<31; i++)
    {
        int cal = 2 * stat[i-1] + 4;
        stat[i] = cal;
    }
    //for(i=1; i<31; i++)
        //cout<<i<< " "<<stat[i]<<endl;
    return;
}

int main()
{
    precal();
    int n;
    cin>>n;
    while(n--)
    {
        int num;
        cin>>num;
        cout<<stat[num]<<endl;
    }
    return 0;
}

/*
Sample Input
4
1
2
3
4
Sample Output
1
4
12
28
*/
