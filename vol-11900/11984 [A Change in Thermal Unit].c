#include<stdio.h>
int main()

{
    int i, t;
    float c, d, f, ct, ft;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%f%f", &c, &d);
        f = ((9*c)/5)+32;
        ft = f + d;
        ct = ((ft-32)*5)/9;
        printf("Case %d: %.2f\n", i, ct);
    }
    return 0;
}
