#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	char garbage;
	while(cin>>n)
	{
		vector <int> adj[n+1];
		for(int i = 0; i<n; i++)
		{
			int rout;
			cin>>rout;
			string line;
			cin>>line;
			stringstream ss(line);
			int cnc;
			while(ss>> garbage >> cnc)
				adj[rout].push_back(cnc);
		}
		/*for(int i = 1; i<=n; i++)
		{
			int sz = adj[i].size();
			cout<<i<< " =";
			for(int j = 0; j<sz; j++)
				cout<< " "<<adj[i][j];
			cout<<endl;
		}*/
		int t;
		cin>>t;
		cout<< "-----"<<endl;
		while(t--)
		{
			int src, trg;
			cin>>src>>trg;
			if(src==trg)
			{
				cout<<src<<endl;
				continue;
			}
			// bfs starts here
			int parent[n+1];
			memset(parent,-1,sizeof(parent));
			queue<int> q;
			q.push(src);
			while(!q.empty() && parent[trg]==-1 )
			{
				int cur = q.front();
				q.pop();
				int sz = adj[cur].size();
				for(int i = 0; i<sz; i++)
				{
					int x = adj[cur][i];
					if(parent[x]==-1)
					{
						parent[x] = cur;
						q.push(x);
					}
				}
			}
			if(parent[trg]==-1)
			{
				cout<< "connection impossible"<<endl;
				continue;
			}
			int n = trg;
			stack <int> st;
			while(n!=src)
			{
				st.push(n);
				n = parent[n];
			}
			cout<<src;
			while(!st.empty())
			{
				int c = st.top();
				st.pop();
				cout<< " "<< c;
			}
			cout<<endl;
		}
	}
	return 0;
}


/*
Sample Input
6
1-2,3,4
2-1,3
3-1,2,5,6
4-1,5
5-3,4,6
6-3,5
6
1 6
1 5
2 4
2 5
3 6
2 1
10
1-2
2-
3-4
4-8
5-1
6-2
7-3,9
8-10
9-5,6,7
10-8
3
9 10
5 9
9 2

Sample Output
-----
1 3 6
1 3 5
2 1 4
2 3 5
3 6
2 1
-----
9 7 3 4 8 10
connection impossible
9 6 2
* */
