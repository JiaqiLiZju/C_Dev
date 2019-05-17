#include <stdio.h>
#include <stdlib.h>
struct Node;
typedef int ElementType;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
 
struct Node{
	ElementType Element;
	Position Next;
};

int IsEmpty(List L){
	return L->Next == NULL;
}

int IsLast(Position P, List L){
	return P->Next == NULL;
}

Position Find(ElementType X, List L){
	Position P = L->Next;
	while(P!=NULL && P->Element!=X){
		P=P->Next;
	}
	return P;
}

Position FindPrevious(ElementType X, List L){
	Position P = L;
	while(P->Next!=NULL && P->Next->Element!=X)
		P=P->Next;
	return P;
}

void Delete(ElementType X, List L){
	Position P, Temp;
	P = FindPrevious(X, L);
	if(!IsLast(P, L)){
		Temp = P->Next;
		P->Next=Temp->Next;
		free(Temp);
	}
}

void Insert(ElementType X, List L, Position P){
	Position Temp;
	Temp = malloc(sizeof(struct Node));
	if(Temp==NULL) exit(0);
	Temp->Element=X;
	Temp->Next=P->Next;
	P->Next=Temp;
}

int main(void){
	List L;
	return IsEmpty(L);
}
