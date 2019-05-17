#include <stdio.h>
#include <stdlib.h>
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data; /* 存储结点数据 */
    PtrToNode   Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表 */
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

/* 你的代码将被嵌在这里 */
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
