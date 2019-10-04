#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen( "flowersin.txt", "r", stdin);
	string str, check; /// Rank: 138
	char c;
	int size, flag, x, no, i, j;
	while(1)
	{
		getline(cin,str);
		if(str=="*")
			break;
		size = str.size();
		flag=x=no=0;
		for(i=0; i<size; i++)
		{
			if((str[i]>='A' &&str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
			{
				if(!flag)
				{
					check[x] = str[i];
					flag=1;
				}
				else
				{
					c = str[i];
					if(check[x-1]==toupper(c) || check[x-1]==tolower(c))
						check[x] = c;
					else
					{
						no=1;
						break;
					}
				}
				for(j=i+1;j<size;j++)
				{
					if(str[j]==32 && str[j+1]!=32)
						break;
				}
			}
			i=j;
			x++;
		}
		if(no)
			cout<<"N"<<endl;
		else
			cout<<"Y"<<endl;
	}
	return 0;
}


/**
int main() /// Rank: 596
{
	string str;
	while(getline(cin,str))
	{
		if(str=="*")
			break;
		stringstream ss(str);
		string word;
		vector <string> v;
		v.clear();
		while(ss>>word)
			v.push_back(word);
		char ch = tolower(v[0][0]);
		int sz = v.size();
		bool flag=1;
		for(int i=1; i<v.size(); i++)
		{
			if(tolower(v[i][0])!=ch)
			{
				flag = 0;
				break;
			}
		}
		if(!flag)
			cout<<"N"<<endl;
		else
			cout<<"Y"<<endl;
	}
	return 0;
}
*/
