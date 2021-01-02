#include <stdio.h>
#include <stdlib.h>
#include "DBLinked.h"

void ListInit(List * plist)
{
	Node * headDmyNode = (Node*)malloc(sizeof(Node));
	Node * tailDmyNode = (Node*)malloc(sizeof(Node));

	plist->head = headNewNode;
	plist->tail = tailNewNode;

	headNewNode->next = tailNewNode;
	headNewNode->prev = NULL;

	tailNewNode->next = NULL;
	tailNewNode->prev = headNewNode;

	plist->numOfData = 0;
	plist->cur = NULL;

	headNewNode->data = -1;
	tailNewNode->data = -1;
}

void LInsert(List * plist, Data data)
{
	Node * newNode = (Node*)malloc(sizeof(Node)); 
	newNode->data = data;
	
	newNode->prev = tail->prev;
	tail->prev = newNode;
	newNode->next = tail;
	newNode->prev = newNode;

	(plist->numOfData)++;
}

int LFirst(List * plist, Data * pdata)
{
	if(plist->head->next == NULL)
		return FALSE;

	plist->cur = plist->head->next;
	*pdata = plist->cur->data;

	return TURE;
}

int LNext(List * plist, Data * pdata)
{
	if(plist->cur->next == tail)
		return FALSE;

	plist->cur = plist->cur->next;
	*pdata = plist->cur->data;

	return TRUE;
}

int LPrevious(List * plist, Data * pdata)
{
	if(plist->cur->prev == head)
			return FALSE;

	plist->cur = plist->cur->prev;
	*padat = plist->cur->data;

	return TRUE;
}
	

Data LRemove(List * plist)
{
	Node * rpos = plist->cur;
	Data rdata = rpos->data;

	if(rpos->next == tail || rpos->prev == head)
		return FALSE;

	rpos->next->prev = rpos->prev;
	rpos->prev->next = rpos->next;

	free(rpos);
	(plist->numOfData)--;
	return rdata;
}

int LCount(List * plist)
{
	return plist->numOfData;
}

	
		

