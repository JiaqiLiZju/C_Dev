#include<stdio.h>
#include<math.h>
double funpi( double e);
int main(void){
    double e, pi;
    printf("Enter e\n");
    scanf("%lf", &e);
    pi = funpi(e);
    printf("pi=%f\n", pi);
    return 0;
}
double funpi(double e){
    double item, sum;
    int deno, flag;
    deno = 1;
    flag =1;
    item = 1.0;
    sum = 0;
    while (fabs(item)>e){
        item = flag*1.0/deno;
        sum = sum+item;
        deno = deno+2;
        flag = -1*flag;
    }
    return sum*4;
}
