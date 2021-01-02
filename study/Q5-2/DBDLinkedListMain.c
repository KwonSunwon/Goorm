#include <stdio.h>
#include "DBDLinkedList.h"

int main(void)
{
	List list;
	int data;

	ListInit(&list);

	LInsert(&list, 1);
	LInsert(&list, 2);
	LInsert(&list, 3);

	if(LFirst(&list, &data))
	{
		printf("%d\n", data);

		while(LNext(&list, &data))
		{
			printf("%d\n", data);
		}
	}

	LPrevious(&list, &data);

	LRemove(&list);
		
	if(LFirst(&list, &data))
	{
		printf("%d\n", data);

		while(LNext(&list, &data))
		{
			printf("%d\n", data);
		}
	}

	printf("%d\n", LCount(&list));

	return 0;
}

