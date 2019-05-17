#include <stdio.h>
#define RATE1 0.100
#define RATE2 0.234
#define RATE3 0.387
#define BREAK1 100
#define BREAK2 300
#define BREAK3 700

int main(void){
    double kwh;
    double bill;

    while(scanf("%lf", &kwh) == 1){
        if (kwh <= BREAK1)
            bill = kwh * RATE1;
        else if (kwh <= BREAK2)
            bill = RATE1 * BREAK1 + kwh * RATE2;
        else
            bill = RATE1 * BREAK1 + RATE2 * BREAK2 + kwh * RATE3;
        printf("The bill is %lf\n", bill);
        scanf("%lf", &kwh);
        return 0;
    }
}