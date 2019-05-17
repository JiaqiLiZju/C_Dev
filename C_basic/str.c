#include<stdio.h>
#include<string.h>
#define MAXLEN 100
int main(void){
	char s[MAXLEN], a={".", " "};
	int i=0, j=0, m;
	gets(s);
	while(strcmp(s[i], ".") ){
		i++; j++;
		if(strcmp(s[j], " " )){
			printf("%d", j);
			j=0;
		}
	}
	return 0;
}
