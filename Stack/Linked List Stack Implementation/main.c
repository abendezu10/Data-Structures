#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node* next;
}node;
node *head;
node *tail;
int size = 0;

void push(int v){
    node *temp1 = (node*)malloc(sizeof(node));
    temp1->value = v;

    if(size == 0){
        temp1->next = head;
        head = temp1;
        size++;
        return;
    }
    int i = 0;
    node *temp2 = head;
    while(i <=size-2){
        temp2 = temp2->next;
        i++;
    }

    temp1->next = temp2->next;
    temp2->next = temp1;
    size++;

}

void print(){
    node *temp = head;


    printf("The stack is: [");
    while(temp != NULL){
        printf(" %d", temp->value);
        temp = temp->next;
    }
    printf(" ]");

}

int main() {
    head = NULL;


    push(8);
    push(9);
    push(10);
    push(11);
    push(12);
    print();

    return 0;
}
