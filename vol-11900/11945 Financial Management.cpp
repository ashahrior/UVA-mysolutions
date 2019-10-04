#include<bits/stdc++.h>
using namespace std;

void process(float sum)
{
    float avg = sum/12.0;
    int a;

    if(avg<=999999999999999.0 && avg>999999999999.0)
    {
        a = avg/1000000000000.0;
        printf("%d,",a);
        avg = fmod(avg,1000000000000.0);
    }
    if(avg<=999999999999.0 && avg>999999999.0)
    {
        a = avg/1000000000.0;
        printf("%d,",a);
        avg = fmod(avg,1000000000.0);
    }
    if(avg<=999999999.0 && avg>999999.0)
    {
        a = avg/1000000.0;
        printf("%d,",a);
        avg = fmod(avg,1000000.0);
    }
    if(avg<=999999.0 && avg>999.0)
    {
        a = avg/1000.0;
        printf("%d,",a);
        avg = fmod(avg,1000.0);
    }
    printf("%.2lf\n",avg);

    return;
}

int main()
{
    int t;
    cin>>t;
    for(int c = 1; c<=t; c++)
    {
        float sum = 0;
        for(int i = 0; i<12; i++)
        {
            float num;
            cin>>num;
            sum += num;
        }
        printf("%d $",c);
        process(sum);
    }
    return 0;
}

/**
Sample Input
1
100.00
489.12
12454.12
1234.10
823.05
109.20
5.27
1542.25
839.18
83.99
1295.01
1.75
Sample Output
1 $1,581.42

*/
