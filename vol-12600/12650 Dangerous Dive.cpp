#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ara[100000], n, r, i, x;
	while(cin>>n>>r)
	{
		//memset(ara,0,n);
		for(i=0; i<=n; i++)
			ara[i]=0;
		for(i=0; i<r; i++)
		{
			cin>>x;
			ara[x]=1;
		}
		if(n==r)
		{
			cout<<"*"<<endl;
			continue;
		}
		for(i=1; i<=n; i++)
		{
			if(ara[i]==0)
				cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}


