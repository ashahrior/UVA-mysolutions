#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		int n, s, sz, x;
		cin>>n;
		vector <int> vv[n+1];
		for(int i=0; i<n; i++)
		{
			cin>>s;
			cin>>sz;
			for(int j=0; j<sz; j++)
			{
				cin>>x;
				vv[s].push_back(x);
				vv[x].push_back(s);
			}
		}
		int src, trg;
		cin>>src>>trg;
		queue <int> q;
		q.push(trg);
		bool vis[n+1];
		int dis[n+1];
		memset(vis,0,sizeof(vis));
		memset(dis,0,sizeof(dis));
		vis[trg] = 1;
		int u, w, countt=0;
		while(!q.empty())
		{
			u = q.front();
			q.pop();
			
			if(u==src)
				countt = dis[src];
			
			int sz = vv[u].size();
			for(int i=0; i<sz; i++)
			{
				w = vv[u][i];
				if(!vis[w])
				{
					vis[w] = 1;
					dis[w] = dis[u] + 1;
					q.push(w);
				}
			}
		}
		cout<<src<< " "<< trg<< " "<< countt-1<<endl;
		if(t>0)
			cout<<endl;
	}
	return 0;
}

/**
Sample Input
1

4
0 3 1 2 3
1 1 0
2 2 0 3
3 2 0 2
1 2
Sample Output
1 2 1
* */
