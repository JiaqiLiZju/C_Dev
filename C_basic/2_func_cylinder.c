#include<stdio.h>
double cylinder(double r, double h);
int main(void){
    double h, r, volume;
    printf("Enter r and h.\n");
    scanf("%lf %lf", &r, &h);
    volume = cylinder(r, h);
    printf("volume=%.3f\n", volume);
    return 0;
}
double cylinder(double r, double h){
    double volume;
    volume = 3.1415*r*r*h;
    return volume;
}
