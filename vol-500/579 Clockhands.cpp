#include<bits/stdc++.h>
using namespace std;
int main()
{
    double hour, minute, angle, hour_angle, minute_angle;
    while(scanf("%lf:%lf",&hour,&minute)==2)
    {
        if(hour==0 && minute==0)
            break;
        hour_angle = hour*30+(minute/60)*30;
        minute_angle = minute*6;
        angle = abs(hour_angle - minute_angle);
        if(angle>180)
            angle = 360 - angle;
        printf("%.03lf\n",angle);
    }
    return 0;
}
