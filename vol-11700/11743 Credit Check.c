#include<stdio.h>
#include<string.h>
int main()
{
    char a[5], b[5], c[5], d[5];
    long long int i, n, sum, sum2, sumz;
    scanf("%lld\n", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%s %s %s %s", &a, &b, &c, &d);
        sum = sum2 = sumz = 0;
        sum+= ((a[0]-48)*2)/10 + ((a[0]-48)*2)%10 + ((a[2]-48)*2)/10 + ((a[2]-48)*2)%10;
        sum+= ((b[0]-48)*2)/10 + ((b[0]-48)*2)%10 + ((b[2]-48)*2)/10 + ((b[2]-48)*2)%10;
        sum+= ((c[0]-48)*2)/10 + ((c[0]-48)*2)%10 + ((c[2]-48)*2)/10 + ((c[2]-48)*2)%10;
        sum+= ((d[0]-48)*2)/10 + ((d[0]-48)*2)%10 + ((d[2]-48)*2)/10 + ((d[2]-48)*2)%10;
        sum2 = a[1]-48 + a[3]-48 + b[1]-48 + b[3]-48 + c[1]-48 + c[3]-48 + d[1]-48 + d[3]-48;
        sumz = sum + sum2;
        if(sumz%10==0)
        {
            printf("Valid\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    return 0;
}

/*#include<stdio.h>
int main()
{
    long long int a, b, c, d, e, f, n, sum, sum2, sumz, i, j;
    scanf("%lld", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld", &a);
        if(a==32)
        {
            i--;
            continue;
        }
        j=0;
        while(a!=0)
        {
            j++;
            b = a/10;
            c = a%10;
            if(j%2!=0)
            {
                sum = sum + c;
            }
            else
            {
                d = 2*c;
                while(d!=0)
                {
                    e = d % 10;
                    f = d / 10;
                    sum2 = sum2 + e;
                    d = f;
                }
            }
            a = b;
        }
        sumz = sum + sum2;
        if(sumz%10==0)
        {
            printf("Valid\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    return 0;
}
*/
