#include<bits/stdc++.h> /// WAzzz... Lots and lots of WAzzz
using namespace std;
#define lolo unsigned long long
bool func2(string str, int ssz)
{
    int dig;
    dig = str[ssz-1];
    if(dig%2)
        return 0;
    else
        return 1;
}

bool func3(string str, int ssz)
{
    lolo sum=0;
    for(int i=0; i<ssz; i++)
        sum+=(str[i]-48);
    if(sum%3)
        return 0;
    else
        return 1;
}

bool func4(string str, int ssz)
{
    int num;
    num = (str[ssz-2] - 48)*10 + (str[ssz-1] - 48);
    if(num%4)
        return 0;
    else
        return 1;
}

bool func5(string str, int ssz)
{
    if(str[ssz-1]=='5' || str[ssz-1]=='0')
        return 1;
    else
        return 0;
}

bool func7(string str, int ssz)
{
    lolo rem=0;
    for(int i=0; i<ssz; i++)
    {
        rem = rem*10+(str[i]-48);
        rem = rem%7;
    }
    if(rem)
        return 0;
    else
        return 1;
}

bool func8(string str, int ssz)
{
    int num;
    num = (str[ssz-3]-48)*100 + (str[ssz-2] - 48)*10 + (str[ssz-1] - 48);
    if(num%8)
        return 0;
    else
        return 1;
}

bool func9(string str, int ssz)
{
    lolo sum=0;
    for(int i=0; i<ssz; i++)
        sum+=(str[i]-48);
    if(sum%9)
        return 0;
    else
        return 1;
}

bool func10(string str, int ssz)
{
    if(str[ssz-1]=='0')
        return 1;
    else
        return 0;
}

bool func11(string str, int ssz)
{
    lolo pos, oddz=0, evenz=0, dif;
    for(int i=0; i<ssz; i++)
    {
        pos=i+1;
        if(pos%2)
            oddz+=str[i]-48;
        else
            evenz+=str[i]-48;
    }
    dif = oddz - evenz;
    if(dif<0)
        dif=dif*(-1);
    if(dif%11)
        return 0;
    else
        return 1;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string str;
    int t, n, i, strz, num;
    bool ok, ok2;
    cin>>t;
    while(t--)
    {
        getchar();
        getline(cin,str);
        strz = str.size();
        cin>>n;
        if(strz<16)
        {
            stringstream ss2(str);
            lolo vajjo;
            ss2>>vajjo;
            ok=1;
            for(i=0; i<n; i++)
            {
                cin>>num;
                if(!ok)
                    continue;
                if(vajjo%num!=0)
                    ok=0;
            }
            cout<<str;
            if(ok)
                printf(" - Wonderful.\n");
            else
                printf(" - Simple.\n");
            continue;
        }
        ok=1, ok2=1;
        for(i=0; i<n; i++)
        {
            cin>>num;
            if(!ok || !ok2)
                continue;
            switch(num)
            {
            case 1:
                ok = 1;
                break;
            case 2:
                ok = func2(str, strz);
                break;
            case 3:
                ok = func3(str, strz);
                break;
            case 4:
                ok = func4(str, strz);
                break;
            case 5:
                ok = func5(str, strz);
                break;
            case 6:
                ok = func2(str, strz);
                ok2 = func3(str, strz);
                break;
            case 7:
                ok = func7(str, strz);
                break;
            case 8:
                ok = func8(str, strz);
                break;
            case 9:
                ok = func9(str, strz);
                break;
            case 10:
                ok = func10(str, strz);
                break;
            case 11:
                ok = func11(str, strz);
                break;
            case 12:
                ok = func3(str, strz);
                ok2 = func4(str, strz);
                break;
            }
        }
        cout<<str;
        if(ok && ok2)
            printf(" - Wonderful.\n");
        else
            printf(" - Simple.\n");
    }
    return 0;
}
