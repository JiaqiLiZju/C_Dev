#include <stdio.h>
#include <stdlib.h>
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data; /* �洢������� */
    PtrToNode   Next; /* ָ����һ������ָ�� */
};
typedef PtrToNode List; /* ���嵥�������� */

List Read(); /* ϸ���ڴ˲��� */
void Print( List L ); /* ϸ���ڴ˲��� */
List Reverse( List L );

int main()
{
    List L1, L2;
    L1 = Read();
    L2 = Reverse(L1);
    Print(L1);
    Print(L2);
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
List Reverse( List L ){
	List p,temp;
	p=L;
	L=NULL;
	while(p){
		temp=p;
		temp->Next=L;
		L=temp;
		p=p->Next;/*p++*/
	}
	return L;
}

List Reverse(List L){
	List rev=NULL, temp;
	while(L){
		temp=L;
		temp->Next=rev;
		rev=temp;
		L=L->Next;
	}
	return rev;
}
