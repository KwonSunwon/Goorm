#include <stdio.h>
#include <stdlib.h>
#include "DBDLinkedList.h"

void ListInit(List * plist)
{
	Node * headNewNode = (Node*)malloc(sizeof(Node));
	Node * tailNewNode = (Node*)malloc(sizeof(Node));

	plist->head = headNewNode;
	plist->tail = tailNewNode;

	headNewNode->next = tailNewNode;
	headNewNode->prev = NULL;

	tailNewNode->next = NULL;
	tailNewNode->prev = headNewNode;

	plist->numOfData = 0;
}

void LInsert(List * plist, Data data)
{
	Node * newNode = (Node*)malloc(sizeof(Node)); 
	newNode->data = data;
	
	newNode->prev = plist->tail->prev;
	plist->tail->prev = newNode;
	newNode->next = plist->tail;
	newNode->prev = newNode;

	(plist->numOfData)++;
}

int LFirst(List * plist, Data * pdata)
{
	if(plist->head->next == NULL)
		return FALSE;

	plist->cur = plist->head->next;
	*pdata = plist->cur->data;

	return TRUE;
}

int LNext(List * plist, Data * pdata)
{
	if(plist->cur->next == plist->tail)
		return FALSE;

	plist->cur = plist->cur->next;
	*pdata = plist->cur->data;

	return TRUE;
}

int LPrevious(List * plist, Data * pdata)
{
	if(plist->cur->prev == plist->head)
			return FALSE;

	plist->cur = plist->cur->prev;
	*pdata = plist->cur->data;

	return TRUE;
}
	

Data LRemove(List * plist)
{
	Node * rpos = plist->cur;
	Data rdata = rpos->data;

	if(rpos->next == plist->tail || rpos->prev == plist->head)
		return FALSE;

	rpos->next->prev = rpos->prev;
	rpos->prev->next = rpos->next;

	plist->cur = plist->cur->prev;

	free(rpos);
	(plist->numOfData)--;
	return rdata;
}

int LCount(List * plist)
{
	return plist->numOfData;
}

	
		

