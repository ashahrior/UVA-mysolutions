#include<stdio.h>
int main()
{
    int s, t, v;
    while(scanf("%d %d", &v, &t)==2)
    {
        s = 2*v*t;
        printf("%d", s);
        printf("\n");
    }
    return 0;
}
