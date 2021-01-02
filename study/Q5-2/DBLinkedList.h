#ifdef __DB_LINKED_LIST_H
#define __DB_LINKED_LIST_H

#define TRUE 	1
#define FALSE	0

typedef int data;

typedef struct _node
{
	Data data;
	struct _node * next;
	struct _node * prev;
} Node;

typedef struct _dbDLinkedList
{
	Node * head;
	Node * tail;
	Node * cur;
	int numOfData;
} DBDLinkedList;

typedef DBDLinkedList List;

void LintInit(List * plist);
void LInsert(List * plist, Data data);

int LFirst(List * plist, Data * pdata);
int LNext(List * plist, Data * pdata);
int LPrevious(List * plist, Data * pdata)r

Data LRemove(List * plist);
int LCount(List * plist);

#endif
