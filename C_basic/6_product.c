#include<stdio.h>
int main(void){
    int i, n;
    double prod;
    printf("enter n");
    scanf("%d", &n);
    prod = 1;
    for (i=1; i<=n; i++){
        prod = prod * i;
    }
    printf("product %.0f", prod);
    return 0;
}
