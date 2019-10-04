#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, n, m, r;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		r=0;
		while(n>0)
		{
			n=n-m;
			r++;
			if(n<=0)
				break;
			n++;
		}
		if(n==0)
			cout<<r<<endl;
		else
			cout<<"cannot do this\n";
	}
	return 0;
}
