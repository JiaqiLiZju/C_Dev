#include <stdio.h>
#include <stdlib.h>

#define NUM 40
void fillarray(double ar[], int n);
void showarray(const double ar[], int n);
int comp(const void * p1, const void * p2);

int main(void){
    double array[NUM];
    fillarray(array, NUM);
    qsort(array, NUM, sizeof(double), comp);
    showarray(array, NUM);
    return 0;
}
void fillarray(double *ar, int n){
    for (int i=0; i<n; i++)
        ar[i] = (double) rand() / ((double) rand()+0.1);
}
void showarray(const double *ar, int n){
    for (int i=0; i<n; i++){
        printf("%9.4f\t", ar[i]);
        if (i%6==5) putchar('\n');
    }
}
int comp(const void *p1, const void *p2){
    const double *a1 = (const double *)p1;
    const double *a2 = (const double *)p2;
    if (*a1 < *a2) return -1;
    else if (*a1 == *a2) return 0;
    else return 1;
}