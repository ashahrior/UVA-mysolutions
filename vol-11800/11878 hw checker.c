#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char sym , r[1000];
    int a , b , count=0;
    while(scanf("%d%c%d=%s", &a, &sym, &b, &r)!=EOF)
    {
        switch(sym)
        {
        case '+':
            if(a + b == atoi(r))
            {
                count++;
            }
            break;
        case '-':
            if(a - b == atoi(r))
            {
                count++;
            }
            break;
        }
    }
    printf("%d\n",count);
    return 0;
}

/*
Sample Input
1+2=3
3-1=5
6+7=?
99-0=99

Sample Output
2
*/
