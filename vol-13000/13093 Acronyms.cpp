#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen( "acroin.txt", "r", stdin);
    //freopen( "acroout.txt", "w", stdout);
    vector <string> authors, books;
    string author, book;
    char c;
    int i, acount, bcount, yes, no, flag;
    while(cin>>author)
    {
    	authors.clear();
    	books.clear();
    	authors.push_back(author);
    	c = getchar();
    	while(c!=10)
    	{
    		cin>>author;
    		authors.push_back(author);
    		c=getchar();
		}
		acount = authors.size();

		cin>>book;
		books.push_back(book);
		c = getchar();
		while(c!=10)
		{
			cin>>book;
			books.push_back(book);
			c=getchar();
		}
		bcount = books.size();
		if(acount!=bcount)
		{
			cout<<"no"<<endl;
			continue;
		}
		no=0;
		for(i=0; i<acount; i++)
		{
			if(authors[i][0]!=books[i][0])
			{
				no++;
				break;
			}
		}
		if(no)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
    }
    return 0;
}
