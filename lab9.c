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
        int i, N, t, k;
   
    scanf("%d", &n);
    for (k=2; k<=n; k++){
        i = 2;
        t = 0;
        while(i < k){
            if (k%i==0){
                t++;
            }
            i++;
        }
        if(t==0){
            printf("%d\n", k);
        }
    }
    return 0;
}
