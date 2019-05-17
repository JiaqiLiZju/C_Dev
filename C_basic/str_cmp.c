#include<stdio.h>
#include<string.h>
#define MAXLEN 10000

int main(void){
	char s1[MAXLEN+1], s2[MAXLEN+1];
	gets(s1); gets(s2);
	char *p = strstr(s2, s1);
	while(p){
		printf("%d ", strlen(s2)-strlen(p));
		p = strstr(p+1, s1);
		/*strstr(p+1, str)£»×Ô¼Ói++*/
	}
	printf('\0');
	return 0;
}
