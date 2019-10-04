#include<bits/stdc++.h>
using namespace std;
int main()
{
    int round;
    while(cin>>round &&round!=-1)
    {
        getchar();
        string solve, guess;
        getline(cin,solve);
        int i, sosize = solve.size();
        getline(cin,guess);
        int gsize = guess.size();
        list <char> sol;
        for(i=0; i<sosize; i++)
        {
            sol.push_back(solve[i]);
        }
        list <char> :: iterator it;
        /*for(it = sol.begin(); it!= sol.end(); it++)
            cout<<*it<<" ";
        /*cout<<endl;//*/
        int hang=0, sizee;
        for(i=0; i<gsize; i++)
        {
            if(!sol.empty())
            {
                sizee = sol.size();
                sol.remove(guess[i]);
                if(sizee == sol.size())
                    hang++;
            }
            else
                break;
        }
        cout << "Round " << round << endl;
        if(sol.empty() && hang<7)
            cout<< "You win."<<endl;
        else if(!sol.empty() && hang<7)
            cout<< "You chickened out."<<endl;
        else
            cout<< "You lose.\n";

    }
    return 0;
}
