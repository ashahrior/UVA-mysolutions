#include<bits/stdc++.h>
using namespace std;

int r, c;
char chk;
vector <string> grid;
int countt;

void dfs(int i, int j)
{
	if(i==r || j==c || i<0 || j<0)
		return;
	if(grid[i][j]==chk)
	{
		grid[i][j] = '.';
		dfs(i-1,j);
		dfs(i+1,j);
		dfs(i,j-1);
		dfs(i,j+1);
	}
	return;
}

bool sortbysec( const pair<char,int> &a, const pair <char,int> &b )
{
	if(a.second==b.second)
	{
		return (a.first<b.first);
	}
	return (a.second>b.second);
}

int main()
{
	int t;
	cin>>t;
	for(int cc = 1; cc<=t ; cc++)
	{
		cin>>r>>c;
		grid.clear();
		grid.resize(r+1);
		map<char,bool>mp;
		vector <char> ls;
		for(int i = 0; i<r; i++)
		{
			for(int j = 0; j<c; j++)
			{
				cin>>grid[i][j];
				if(!mp[grid[i][j]])
				{
					ls.push_back(grid[i][j]);
					mp[grid[i][j]] = 1;
				}
			}
		}
		int sz = ls.size();
		//vector < pair<char,int> > pp;
		//pp.resize(sz+1);
		pair <char, int> pp[sz+1];
		for(int x = 0; x<sz; x++)
		{
			chk = ls[x];
			countt = 0;
			for(int i = 0; i<r; i++)
			{
				for(int j = 0; j<c; j++)
				{
					if(grid[i][j]==chk)
					{
						countt++;
						dfs(i,j);
					}
				}
			}
			//pp.push_back(make_pair(chk,countt));
			pp[x] = make_pair(chk,countt);
		}
		//sort(pp.begin(),pp.end());
		sort(pp,pp+sz,sortbysec);
		printf("World #%d\n", cc);
		for(int i = 0; i<sz; i++)
			cout<< pp[i].first<< ": "<< pp[i].second<<endl;
	}
	return 0;
}

/*
Sample Input
3
4 8
ttuuttdd
ttuuttdd
uuttuudd
uuttuudd
9 9
bbbbbbbbb
aaaaaaaab
bbbbbbbab
baaaaacab
bacccccab
bacbbbcab
bacccccab
baaaaaaab
bbbbbbbbb
9 9
bbbbbbbbb
ccccccccb
bbbbbbbcb
bcccccacb
bcaaaaacb
bcabbbacb
bcaaaaacb
bcccccccb
bbbbbbbbb

Sample Output
World #1
t: 3
u: 3
d: 1
World #2
b: 2
a: 1
c: 1
World #3
b: 2
a: 1
c: 1
*/
