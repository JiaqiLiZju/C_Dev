#include<stdio.h>
int main(void){
    int no, hun, rev;
    printf("enter num");
    scanf("%d", &no);
    hun = no/100;
    rev = hun + (no-hun*100)/10*10 + no%10*100;
    printf("%d", rev);
    return 0;
}
