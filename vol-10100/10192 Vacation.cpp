#include<bits/stdc++.h>
using namespace std;

int dp[102][102];

int LCS(char x[], char y[], int i, int j)
{
    if(x[i]=='\0' || y[j]=='\0') return 0;

    if(dp[i][j]!=-1) return dp[i][j];

    if(x[i]==y[j])
        dp[i][j] = 1 + LCS(x,y,i+1,j+1);
    else
        dp[i][j] = max(LCS(x,y,i+1,j),LCS(x,y,i,j+1));
    return dp[i][j];
}
int main()
{
    char x[102], y[102];
    int cs = 1;
    while(gets(x))
    {
        if(x[0]=='#')
            break;
        gets(y);
        memset(dp,-1,sizeof(dp));
        printf("Case #%d: you can visit at most %d cities.\n", cs++, LCS(x,y,0,0));
    }
    return 0;
}
