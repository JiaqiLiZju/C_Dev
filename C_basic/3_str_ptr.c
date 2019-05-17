#include <stdio.h>
#define MAX 50
void put_str(const char *);
int put_count(const char *);
int main(void){
    char name[MAX];
    char * ptr;
    ptr = fgets(name, MAX, stdin);
    printf("name:%s\tptr:%s\n", name, ptr);
    return 0;
}
void put_str(const char * str){
    while (*str)
        putchar(*str++);
}
int put_count(const char * str){
    int count = 0;
    while (*str){
        putchar(*str++);
        count++;
    }
    return count;
}