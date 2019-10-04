#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[15], i, t, max, cases=0;
    char w[10][120];
    scanf("%d", &t);
    while(t--)
    {
        for(i=0; i<10; i++)
            scanf("%s %d", &w[i], &a[i]);
       max = 0;
       for(i=0; i<10; i++)
       {
           if(a[i]>max)
            max = a[i];
       }
       cases++;
       printf("Case #%d:\n",cases);
       for(i=0; i<10; i++)
       {
           if(a[i]==max)
           {
               printf("%s\n", w[i]);
           }
       }
    }
    return 0;
}
