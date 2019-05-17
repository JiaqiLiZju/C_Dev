#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

static void CopyNode(Item item, Node * pNode);

void InitList(List * plist){
    *plist = NULL;
}

bool IsEmpty(const List * plist){
    if(*plist==NULL) return true;
    else return false;
}

bool IsFull(const List * plist){
    Node *pt;
    bool full;
    pt = (Node *)malloc(sizeof (Node));
    if (pt == NULL) full=true;
    else full=false;
    free(pt);
    return full;
}

unsigned int ListItemCnt(const List * plist){
    unsigned int cnt = 0;
    Node * pnode = *plist;
    while(pnode){
        cnt++;
        pnode = pnode->next;
    }
    return cnt;
}

bool AddItem(Item item, List * plist){
    Node * pnew;
    Node * scan = *plist; //not directly proc plist

    pnew = (Node *)malloc(sizeof (Node));
    if (pnew==NULL) return false;
    CopyNode(item, pnew);
    pnew->next=NULL;

    if (scan==NULL) *plist=pnew;
    else{
        while (scan->next!=NULL)
            scan=scan->next;
        scan->next=pnew;
    }
    return true;
}

void TravFunc(const List * plist, void (* pfun) (Item item)){
    Node * pnode = *plist;
    while (pnode){
        (* pfun)(pnode->item);
        pnode = pnode->next;
    }
}

void EmptyList(List * plist){
    Node * psave;
    while (*plist != NULL){
        psave=(*plist)->next;
        free(*plist);
        *plist=psave;
    }
}

static void CopyNode(Item item, Node * pnode){
    pnode->item = item;
}