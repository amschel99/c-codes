#include <stdio.h>
double calculate_profit(float pa, int time)
{
    double rate;
    double profit;
    if (time == 1)
    {
        rate = (double)0 / 100;
    }
    else if (time == 2)
    {
        rate = (double)2 / 100;
        }
    else if (time == 3)
    {
        rate = (double)3 / 100;
    }
    else if (time == 4)
    {
        rate = (double)5 / 100;
    }
    else if (time >= 5)
    {
        rate = (double)8 / 100;
    }

    printf("%lf is rate", rate);
    return pa * rate * time;
}
int main()
{
    int time;
    float pa;
    printf(" please enter the principal amount ");
    scanf("%f", &pa);
    printf(" please enter the time in years ");
    scanf("%d", &time);
    printf(" your gross profit is, %lf ", calculate_profit(pa, time));

    return 0;
}