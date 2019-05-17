#include<stdio.h>
#include<math.h>
int main(void){
    int money, year;
    double rate, sum;
    printf("enter money:\n");
    scanf("%d", &money);
    printf("enter year:\n");
    scanf("%d", &year);
    printf("enter rate:\n");
    scanf("%lf", &rate);
    
    sum = money*pow(1+rate, year);
    printf("sum=%.2f\n", sum);
    return 0;
}
