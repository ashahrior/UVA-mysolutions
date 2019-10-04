#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen( "newsin.txt", "r", stdin);
	int t, n, i, j, len, line;
	double sum;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>n;
		double v[n+1];
		char c[n+1];
		getchar();
		for(i=0; i<n; i++)
		{
			cin>>c[i]>>v[i];
			getchar();
		}
		sum=0.0;
		cin>>line;
		getchar();
		while(line--)
		{
			getline(cin,str);
			len = str.length();
			for(i=0; i<len; i++)
			{
				for(j=0; j<n; j++)
				{
					if(str[i]==c[j])
					{
						sum+=v[j];
						break;
					}
				}
			}
		}
		printf("%.2lf$\n", (sum/100.00));
	}
	return 0;
}

