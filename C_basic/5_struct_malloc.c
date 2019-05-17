#include <stdio.h>
#include <string.h> //strcpy, strlen
#include <stdlib.h> //malloc, free

//structure
struct namect {
    char * fname;
    char * lname;
    int letters;
};

//function prototype
void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *); //const
void cleanup(struct namect *);

//main
int main(void){
    struct namect person;
    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    cleanup(&person);
    return 0;
}

//function implement
void getinfo(struct namect * person){
    char temp[80];
    printf("enter fname;\nenter lname;\n");

    gets(temp);
    person->fname=(char *)malloc(strlen(temp)+1);
    strcpy(person->fname, temp);
    
    gets(temp);
    person->lname=(char *)malloc(strlen(temp)+1);
    strcpy(person->lname, temp);
}
void makeinfo(struct namect * person){
    person->letters = strlen(person->fname) + strlen(person->lname);
}
void showinfo(const struct namect * person){
    printf("%s\t%s\t%d\n", person->fname, person->lname, person->letters);
}
//free what you malloc
void cleanup(struct namect * person){
    free(person->fname);
    free(person->lname);
}