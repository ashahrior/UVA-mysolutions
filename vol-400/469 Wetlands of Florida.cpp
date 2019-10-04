#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mset(a,b) memset(a,b,sizeof(a))
#define pb(a) push_back(a)
#define pf printf
#define sf scanf
#define LL unsigned long long
#define lolo long long
#define PI acos(-1)
#define rev(a) reverse(a.begin(),a.end())
#define gl(a) getline(cin,a)
#define v_sort(v) sort(v.begin(),v.end())
#define sortt(a,n) sort(a, a+n)
#define transform_down(word) transform(word.begin(), word.end(), word.begin(), ::tolower)
#define transform_up(word) transform(word.begin(), word.end(), word.begin(), ::toupper)

vector < string > grid;
bool vis[100][100];
int countt, xl, yl;

void dfs(int x, int y)
{
	if(x>=xl || y>=yl || x<0 || y<0)
		return;

	if(grid[x][y]=='W' && !vis[x][y])
	{
		countt++;
		vis[x][y] = 1;
		dfs(x,y-1);
		dfs(x,y+1);
		dfs(x-1,y);
		dfs(x+1,y);
		dfs(x-1,y-1);
		dfs(x-1,y+1);
		dfs(x+1,y-1);
		dfs(x+1,y+1);
	}
	return;
}

int main()
{
	int t;
	cin>>t;
	getchar();
	getchar();
	while(t--)
	{
		string inp;
		grid.clear();
		xl = yl = 0;
		while( getline(cin,inp) && inp.size()>0 )
		{
			if(inp[0]=='L' || inp[0]=='W')
			{
				grid.push_back(inp);
				int a = grid.size();
				xl = max(xl,a);
				int b = inp.size();
				yl = max(yl,b);
			}
			else
			{
				int x, y;
				stringstream ss(inp);
				ss>>x>>y;
				--x, --y;
				countt = 0;
				mset(vis,0);
				if(grid[x][y]=='L')
					countt = 0;
				else dfs(x,y);
				cout<<countt<<endl;
			}
		}
		if(t)
		 cout<<endl;
	}
	return 0;
}


/*
Sample Input
2

LLLLLLLLL
LLWWLLWLL
LWWLLLLLL
LWWWLWWLL
LLLWWWLLL
LLLLLLLLL
LLLWWLLWL
LLWLWLLLL
LLLLLLLLL

3 2
7 5

LLLLLLLLL
LLWWLLWLL
LWWLLLLLL
LWWWLWWLL
LLLWWWLLL
LLLLLLLLL
LLLWWLLWL
LLWLWLLLL
LLLLLLLLL

3 2
7 5

Sample Output
12
4

12
4
* */
