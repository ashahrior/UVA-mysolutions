#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("in.txt", "r", stdin);
	int i, len, maxx=0;
	string str, word;
	while(1)
	{
		cin>>str;
		if(str=="E-N-D")
			break;
		len = str.size();
		if(len>maxx)
		{
			maxx=len;
			word = str;
		}
	}

	for(i=0; i<maxx; i++)
	{
		if(word[i]>='A' && word[i]<='Z')
			printf("%c",word[i]+32);
		else if(word[i]>='a' && word[i]<='z' || word[i]=='-')
			cout<<word[i];
	}
	cout<<endl;
	return 0;
}
