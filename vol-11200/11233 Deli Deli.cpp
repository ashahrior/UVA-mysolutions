#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen( "in.txt", "r", stdin);
    int irregular, lists, i, j, sz;
    cin>>irregular>>lists;
    getchar();
    string ising[irregular+1] , iplu[irregular+1], food[lists+1];
    for(i=0; i<irregular; i++)
    {
        cin>>ising[i];
        cin>>iplu[i];
        getchar();
    }
    for(i=0; i<lists; i++)
    {
        cin>>food[i];
        getchar();
    }


    for(i=0; i<lists; i++)
    {
        bool flag=0;
        for(j=0; j<irregular; j++)
        {
            if(food[i]==ising[j])
            {
                cout<<iplu[j]<<endl;
                flag=1;
                break;
            }
        }
        if(flag)
            continue;
        sz = food[i].size();
        if(food[i][sz-1]=='o' || food[i][sz-1]=='s' || food[i][sz-1]=='x')
        {
            cout<<food[i]+"es"<<endl;
            continue;
        }
        if( (food[i][sz-2]=='c' && food[i][sz-1]=='h') || (food[i][sz-2]=='s' && food[i][sz-1]=='h') )
        {
            cout<<food[i]+ "es"<<endl;
            continue;
        }
        if( food[i][sz-1]=='y' )
        {
            if( food[i][sz-2]=='a' || food[i][sz-2]== 'e' || food[i][sz-2]== 'i' || food[i][sz-2]== 'o' || food[i][sz-2]=='u')
            {
                cout<<food[i]+"s"<<endl;
                continue;
            }
            else
            {
                food[i][sz-1] = 'i';
                cout<<food[i]+ "es"<<endl;
                continue;
            }
        }
        else
            cout<< food[i]+ "s"<<endl;
    }
    return 0;
}
