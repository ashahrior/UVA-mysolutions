#include<bits/stdc++.h>
using namespace std;

vector< string > grid;
set <int> cnt;
int n;

void dfs(int x, int y)
{
	if(x==n || y==n || x<0 || y<0)
		return;
	// (i − 1, j − 1),(i − 1, j),(i, j − 1),
	//(i, j + 1),(i + 1, j),(i + l, j + 1)
	if(grid[x][y]=='b')
	{
		cnt.insert(x);
		grid[x][y] = '.';
		dfs(x-1 , y-1);
		dfs(x-1 , y);
		dfs(x , y-1);
		dfs(x , y+1);
		dfs(x+1 , y);
		dfs(x+1 , y+1);
	}
	return;
}

int main()
{
	int cs = 1;
	while(cin>>n && n)
	{
		grid.resize(n+1);
		grid.clear();
		for(int i = 0; i<n; i++)
			cin>>grid[i];
		bool flag = false;
		for(int i = 0; i<n; i++)
		{
			for(int j = 0; j<n; j++)
			{
				if(grid[i][j]=='b')
				{
					cnt.clear();
					dfs(i,j);
					int sz = cnt.size();
					if(sz==n)
					{
						flag = true;
						break;
					}
				}
			}
		}
		cout<<cs++;
		if(flag)
			cout<< " B"<<endl;
		else cout<< " W"<<endl;
	}
	return 0;
}

/*
Sample Input
4
bbwb
wwbw
bbwb
bwww
4
bbwb
wwbw
bwwb
wwbb
0

Sample Output
1 W
2 B
* */
