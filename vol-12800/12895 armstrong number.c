#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    char num[100];
    long long int n, i,  rem, x, c, len;
    double sum;
    scanf("%lld", &c);
    getchar();
    for(i=1; i<=c; i++)
    {
        sum=0;
        gets(num);
        len = strlen(num);
        n = atoi(num);
        x=n;
        while(x!=0)
        {
            rem = x % 10;
            x = x / 10;
            sum+= (double)pow(rem,len);
        }
        if(sum == n)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}

/*
Sample Input
3
153
2732
54748

Sample Output
Armstrong
Not Armstrong
Armstrong
*/
