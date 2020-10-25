#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    int data;
    struct _node * next;
} Node;

int main(void){
    Node * head = NULL;
    Node * tail = NULL;
    Node * cur = NULL;

    Node * newNode = NULL;
    int readDate;

    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = 0;
    newNode->next = NULL;

    head = newNode;
    tail = newNode;

    /*
    head = (Node*)malloc(sizeof(Node));
    tail = head;
    */

    while(1){
        printf("자연수 입력: ");
        scanf("%d", &readDate);
        if(readDate < 1 )
            break;

        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = readDate;
        newNode->next = NULL;

        tail->next = newNode;
        tail = newNode;
    }
    printf("\n");

    printf("입력 받은 데이터의 전체출력! \n");
    if(head->next == NULL)
        printf("저장된 자연수가 존재하지 않습니다. \n");
    else{
        cur = head;

        while(cur->next != NULL){
            cur = cur->next;
            printf("%d", cur->data);
        }
    }
    printf("\n\n");

    if(head == NULL)
        return 0;
    else{
        Node * delNode = head;
        Node * delNextNode = head->next;

        printf("Dummy Node를 삭제합니다. \n");
        free(delNode);

        while(delNextNode != NULL){
            delNode = delNextNode;
            delNextNode = delNextNode->next;

            printf("%d을(를) 삭제합니다. \n", delNode->data);
            free(delNode);
        }
    }

    return 0;
}