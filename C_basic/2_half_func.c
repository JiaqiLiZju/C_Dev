#include<stdio.h>
int main(void){
    double x, y;
    printf("enter x (x>0): \n");
    scanf("%lf", &x);
    if (x<=15){
        y = 4*x/3;
    }
    else{
        y = 2.5*x-10.5;
    }
    printf("y:f(%.2f)=%.2f\n", x, y);
    return 0;
}
