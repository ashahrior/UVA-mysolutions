#include<stdio.h>
int main()
{
    int a[15];
    int n, i, j, c1, c2;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    for(i=1;i<=n;i++)
    {
        for(j=0;j<10;j++)
            scanf("%d", &a[j]);
        c1=0, c2=0;
        for(j=0;j<9;j++)
        {
            if(a[j]<a[j+1])
                c1++;
            if(a[j]>a[j+1])
                c2++;
        }
        if(c1!=0 && c2!=0)
            printf("Unordered\n");
        else
            printf("Ordered\n");
    }
    return 0;
}
