#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    struct Node *prev;
    struct Node *next;
    int value;
}node;

node* head;

void insert(int n){

    node* newNode = (node*)malloc(sizeof(node));
    newNode->value = n;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;



}

void print(){

    node* temp = head;
    printf("The list is : [");
    while(temp != NULL){
        printf(" %d", temp->value);
        temp = temp->next;
    }
    printf(" ]");



}


int main() {
    head = NULL;

    insert(3);
    insert(10);
    insert(2);
    insert(5);
    insert(15);

    print();




    return 0;
}
