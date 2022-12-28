#include <stdio.h>
#include <math.h>

int main()
{
    const float freem = 499;
    float p_for_free;
    printf("My payment for 499 free minutes: ");
    scanf("%f", &p_for_free);

    float one_free_minute_cost = p_for_free / freem;
    const double one_notfree_min = one_free_minute_cost * 1.45;

    int minutes_spoken;
    printf("Enter the summary of minutes you were on phone: ");
    scanf("%d", &minutes_spoken);

    if(minutes_spoken - freem <= 0){
        printf("You have not spoken over your rate. You have to pay %.1f rubs", p_for_free);
    }else{
        printf("You have spoken %.1f minutes over your limit \nYou have to overpay %.1f rubs. Overpaying rate for 1 minute: %.1f", minutes_spoken - freem, (minutes_spoken - freem)*one_notfree_min, one_notfree_min);
    }
    int n;
    scanf("%d", &n);
    int prime[n];
    int i;
    for (i = 0; i <= n; i++) 
    {
        prime[i] = 1;
    }
    int p = 2;
    while (pow(p, 2) <= n)
    {
        if (prime[p] == 1)
        {
            for (i = pow(p, 2); p != n + 1; i+=p)
            {
                prime[i] = 0;
            }
        }
        p++;
    }
    for (p = 2; p != n+1; p++)
    {
        if (prime[p] == 1)
        {
            printf("%d", p);
        }
    }
    
    return 0;
}
