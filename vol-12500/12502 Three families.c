#include<stdio.h>
int main()
{
    int a, b, c, pay, n, i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        pay = c * (a+(a-b));
        pay = pay/(a+b);
        printf("%d\n", pay);
    }
    return 0;
}
