#include<stdio.h>
#include<string.h>
int MaxSub(int A[], int N);
int main(void){
	int N;
	int A[100000];
	scanf("%d", &N);
	A = gets();
	printf("%d", MaxSub(A, N));
	return 0;
}

