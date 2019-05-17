#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
	char s[]="asddffg";
	char *p = strchr(s, 'd');
	char c=*p;
	*p='\0';
	char *t=(char *)malloc(sizeof(s)+1);
	strcpy(t, s);
	printf("%s\n", t);
	printf("%s\n", s);
	free(t);
	*p=c;
	printf("%s\n", s);
	return 0; 
} 
