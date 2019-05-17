#include<stdio.h>
int main(void){
    int fahr, upper, lower;
    double cels;
    printf("enter upper fahr:\n");
    scanf("%d", &upper);
    printf("enter lower fahr:\n");
    scanf("%d", &lower);
    if (lower<=upper){
        printf("from pahr to cels\n");
        for (fahr=lower; fahr<=upper; fahr++){
            cels = (5.0/9.0)*(fahr-32);
            printf("%d %.1f\n", fahr, cels);
        }
    }
    else{
        printf("invalid value!\n");
    }
    
    return 0;
}
