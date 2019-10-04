#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j, count;
    while(scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j)==10)
    {
        count = 0;
        if(a==f || b==g || c==h || d==i || e==j)
        {
            count++;
        }
    if(count==0)
    {
        printf("Y\n");
    }
    else printf("N\n");
    }
    return 0;
}

