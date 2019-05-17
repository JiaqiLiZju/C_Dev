#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*define node structure*/
struct stud_node{
	int num;
	char name[20];
	int score;
	/*define pointer next*/
	struct stud_node *next;
}; 
/*define function*/
struct stud_node *create_stud_doc();
struct stud_node *insert_doc(struct stud_node *head, struct stud_node *stud);
struct stud_node *delete_doc(struct stud_node *head, int num);
void print_stud_doc(struct stud_node *head);

int main(void){
	struct stud_node *head, *p;
	int choice, num, score;
	char name[20];
	int size = sizeof(struct stud_node);
	
	do{
		printf("1:create; 2:insert; 3:delete; 4:print; 0:exit\n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				head = create_stud_doc();
				break;
			case 2:
				printf("enter num, name, score:\n");
				scanf("%d %s %d", &num, name, &score);
				/*molloc new node*/
				p = (struct stud_node *)malloc(size);
				p->num = num;
				strcpy(p->name, name);
				p->score = score;
				/*call insert*/
				head = insert_doc(head, p);
				break;
			case 3:
				printf("enter num:\n");
				scanf("%d", &num);
				head = delete_doc(head, num);
				break;
			case 4:
				print_stud_doc(head);
				break;
			case 0:
				break;
		}
	}while (choice != 0);
	
	return 0;
}

struct stud_node *create_stud_doc(void){
	struct stud_node *head, *p;
	/*init head node*/
	head = NULL;
	int num, score;
	char name[20];
	int size = sizeof(struct stud_node); 
	
	printf("enter num, name, score:\n");
	scanf("%d %s %d", &num, name, &score);
	if (num!=0){
		/*molloc new node*/
		p = (struct stud_node *)malloc(size);
		p->num = num;
		strcpy(p->name, name);
		p->score = score;
		/*call insert*/
		head = insert_doc(head, p);	
		scanf("%d %s %d", &num, name, &score);
	}
	return head;
}

struct stud_node *insert_doc(struct stud_node *head, struct stud_node *stud){
	struct stud_node *ptr_stud, *ptr1, *ptr2_head;
	ptr2_head = head;
	ptr_stud = stud;
	
	if (head==NULL){
	/*head is null*/
		head = ptr_stud;
		head->next=NULL;
	}
	else{
		while ((ptr_stud->num>ptr2_head->num)&&(ptr2_head->next!=NULL)){
			ptr1 = ptr2_head;
			ptr2_head = ptr2_head->next;
		}
		if (ptr_stud->num<=ptr2_head->num){
			if (head==ptr2_head) head=ptr_stud;
			else ptr1->next=ptr_stud;
		}
		else{
			ptr2_head->next=ptr_stud;
			ptr_stud->next=NULL;
		}
	}
	return head;
}
struct stud_node *delete_doc(struct stud_node *head, int num){
	struct stud_node *ptr1, *ptr2;
	
	while (head!=NULL&&head->num==num){
		ptr2=head;
		head=head->next;
		free(ptr2);
	}
	if (head==NULL){
		return NULL;
	}
	ptr1=head;
	ptr2=head->next;
	while (ptr2!=NULL){
		if (ptr2->num==num){
			ptr1->next=ptr2->next;
			free(ptr2);
		}
		else{
			ptr1=ptr2;
		}
		ptr2=ptr1->next;
	}
	return head;
}

void print_stud_doc(struct stud_node *head){
	struct stud_node *ptr;
	if (head==NULL){
		printf("\nNo record\n");
		return;
	}
	printf("\nRecords:\n");
	printf("Num\tName\tScore\n");
	for (ptr=head; ptr!=NULL; ptr=ptr->next){
		printf("%d\t%s\t%d\n", ptr->num, ptr->name, ptr->score);
	}
}
