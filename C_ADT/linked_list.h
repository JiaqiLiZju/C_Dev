#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>

#define MAXSIZE 45
struct film {
    char title[MAXSIZE];
    int rating;
};
typedef struct film Item;

struct node {
    Item item;
    struct node *next;
};
typedef struct node* List;
typedef struct node Node;

void InitList(List * plist);
bool IsEmpty(const List * plist);
bool IsFull(const List * plist);
unsigned int ListItemCnt(const List * plist);
bool AddItem(Item item, List * plist);
void TravFunc(const List * plist, void (* pfun) (Item item));
void EmptyList(List * plist);

#endif