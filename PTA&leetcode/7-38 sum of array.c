#include<stdio.h>
int main(void){
    int A, N;
    long int S, temp;
    int i;
    printf("enter A N");
    scanf("%d %d", &A, &N);
    if (A<=9&&A>=1){
        if (N<=100000&&N>=0){
            temp = A;
            for (i=1; i<=N; i++){
                S = S + temp;
                temp = temp*10 + A;
            }
        }
    }
    printf("%ld", S);
    return 0;
}
