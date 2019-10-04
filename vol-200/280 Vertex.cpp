#include<bits/stdc++.h>
using namespace std;

int vt;
vector < vector <int> > par;
vector < bool > vis;

void dfs(int src) {
	int sz = par[src].size();
	for(int i = 0; i<sz; i++) {
		int cur = par[src][i];
		if(!vis[cur]) {
			vis[cur] = 1;
			dfs(cur);
		}
	}
	return;
}

void print_path(int s)
{
	int countt = 0;
	vector <int> path;
	for(int i = 1; i<=vt; i++) {
		if(!vis[i]) {
			countt++;
			path.push_back(i);
		}
	}
	if(!countt)
		cout<< "0"<<endl;
	else {
		cout<<countt;
		int sz = path.size();
		for(int i = 0; i<sz; i++)
			cout<< " "<<path[i];
		cout<<endl;
	}
	return;
}

int main() {
	while(cin>>vt && vt) {
		int src, tg;
		par.clear();
		par.resize(vt+1);
		vis.resize(vt+1);
		while(cin>>src && src) {
			while(cin>>tg && tg) {
				par[src].push_back(tg);
			}
		}
		
		int q;
		cin>>q;
		int ara[q+1];
		for(int i = 0; i<q; i++)
			cin>>ara[i];
		
		for(int i = 0; i<q; i++) {
			vis.assign(vt+1,0);
			dfs(ara[i]);
			print_path(ara[i]);
		}
	}
	return 0;
}

/*
Sample Input
3
2 3 0
3 1 2 0
0
3 1 2 3
8
2 3 4 8 0
3 1 6 0
4 3 5 7 0
5 2 3 6 8 0
6 1 3 4 5 0
7 1 3 5 6 0
8 2 3 4 5 0
0
8 1 2 3 4 5 6 7 8
0

Sample Output
3 1 2 3
0
0
8 1 2 3 4 5 6 7 8
0
0
0
0
0
0
0
*/
