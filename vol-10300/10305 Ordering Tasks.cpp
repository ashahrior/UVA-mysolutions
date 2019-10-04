#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, o;
	while(cin>>n>>o)
	{
		if(!n && !o)
			break;
		vector<int> v[n+1];
		for(int c = 1; c<=o; c++)
		{
			int x, y;
			cin>>x>>y;
			v[y].push_back(x);
		}
		int mx = 0;
		for(int c = 1; c<=n; c++)
		{
			int sz = v[c].size();
			mx = max(mx,sz);
		}
		for(int i = 0; i<=mx; i++)
		{
			for(int j = 1; j<=n; j++)
			{
				int sz = v[j].size();
				if(sz==i)
				{
					cout<<j<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}

/*
Sample Input
5 4
1 2
2 3
1 3
1 5
0 0
Sample Output
1 4 2 5 3
*/
