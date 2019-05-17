#include <stdio.h>
#include <stdlib.h> //malloc, free
#include <string.h> //strcpy

#define TSIZE 45

struct node {
    char title[TSIZE];
    int rating;
    struct node *next;
};

//func prototype
//init linked list
//get info
//show info
//free linked list
int main(void){
    struct node *head = NULL;
    struct node *prev, *current;
    char input[TSIZE];
    
    puts("enter:");
    while (gets(input)!=NULL && input[0]!=0){
        //init node
        current = (struct node *)malloc(sizeof(struct node));
        if (head == NULL)
            head = current;
        else 
            prev->next = current;
        //proc current;
        current->next=NULL;
        strcpy(current->title, input);
        puts("rating <0-9>");
        scanf("%d", &current->rating);
        while (getchar()!='\n')
            continue;
        puts("enter next or '\\n' to exit");
        prev = current;
    }

    //show info
    if (head == NULL) printf("no record;\n");
    current = head;
    while (current){
        printf("movie:\t%s\nrating:\t%d\n", current->title, current->rating);
        current = current->next;
    }

    //free
    current = head;
    while (current){
        free(current);
        current = current->next;
    }
    return 0;
}