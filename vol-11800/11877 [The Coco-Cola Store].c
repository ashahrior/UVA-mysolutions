#include<stdio.h>
int main()
{
    int n, i, num, sum, rem;
        while(scanf("%d", &n)==1 && n!=0)
    {
        num = n+1;
        sum = 0;
        while(1)
        {
            rem = num % 3;
            num = num / 3;
            sum = sum + num;
            num = num + rem;
            if(num<3)
            {
                break;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}

