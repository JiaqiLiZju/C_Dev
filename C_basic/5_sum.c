#include<stdio.h>
#include<math.h>
int main(void){
    int i, n;
    int sum = 0;
    printf("enter n\n");
    scanf("%d", &n);
    for (i; i<=n; i++){
        sum = sum + i;
    }
    printf("sum = %d", sum);
    return 0;
}

int itemsum(void){
    int i, n;
    int sum = 0;
    printf("enter n\n");
    scanf("%d", &n);
    for (i; i<=n; i++){
        sum = sum + pow(-1,n)/(2*n+1);
    }
    printf("sum = %.2f", sum);
    return 0;
}
