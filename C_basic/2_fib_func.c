#include <stdio.h>
long fib(int n);
int main(void){
    int n;
    long sum;
    scanf("%d", &n);
    sum = fib(n);
    printf("%ld", sum);
}
long fib(int n){
    if (n<2)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}