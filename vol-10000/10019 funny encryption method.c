#include<stdio.h>
long long int binary(long long int x)
{
    long long int n,i,b, r;
    b=0, n=x;
    while(n!=0)
    {
        r = n%2;
        if(r==1)
            b++;
        n = n>>1;
    }
    return b;
}
long long int hexa(long long int x)
{
    long long int n, h, r;
    h=0, n=x;
    while(n!=0)
    {
        r = n % 10;
        if(r==0)
            h+=0;
        else if(r==1 || r==2 || r==4 || r==8)
            h+=1;
        else if(r==3 || r==5 || r==6 || r==9)
            h+=2;
        else if(r==7)
            h+=3;
        n = n/10;
    }
    return h;
}
int main()
{
    long long int m,i, bin, hex, t;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&m);
        bin = binary(m);
        hex = hexa(m);
        printf("%lld %lld\n", bin, hex);
    }
    return 0;
}
