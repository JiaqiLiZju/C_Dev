#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20

void strsrt(char *strings[], int num);

int main(void){
    char input[LIM][SIZE];
    char * ptrstr[LIM];
    int cnt = 0;
    printf("enter lines\n");
    while(cnt<LIM && gets(input[cnt]) != NULL && input[cnt][0] != '\0'){
        ptrstr[cnt] = input[cnt];
        cnt++;
    }
    strsrt(ptrstr, cnt);
    for (int k=0; k<cnt; k++)
        puts(ptrstr[k]);

    return 0;
}

void strsrt(char *strings[], int num){
    char * temp;
    for (int top=0; top<num-1; top++){
        for (int seek=top+1; seek<num; seek++){
            if (strcmp(strings[top], strings[seek]) > 0){
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
        }
    }
}