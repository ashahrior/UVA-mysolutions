#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(scanf("%lld", &n) != EOF)
    {
//        int countt = 0;
//        for(int x = 0; x<=n; x++)
//        {
//            for(int y = 0; y<=n/2; y++)
//            {
//                for(int z = 0; z<=n/2; z++)
//                {
//                    long long summ = x + 2*y + 2*z;
//                    if(summ>n)
//                        break;
//                    if(summ==n)
//                        countt++;
//                }
//            }
//        }

        long long countt = (n/2+1)*(n/2+2)/2;

        printf("%lld\n", countt);
    }
    return 0;
}

/**
// n<1000001
// x + 2y + 2z = n
Sample Input
2
3
Sample Output
3
3
*/
