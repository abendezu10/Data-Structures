#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int value;
    struct Node* next;
}node;

node *head;
int size;

void insert(int x, int pos){

    node* temp1 = (node*)malloc(sizeof(node));
    temp1->value = x;
    temp1->next = NULL;
    if(pos==1 || size == 0){
        temp1->next = head;
        head = temp1;
        size++;
        return;
    }

    node* temp2 = head;
    for(int i = 0; i<pos-2;i++){
        temp2 = temp2 -> next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    size++;
}

void delete(int pos){


    node* temp1 = head;
    node* temp2 = head;

    if(pos ==1){
        temp2 = temp1->next;
        head = temp2;
        free(temp1);
        size--;
        return;
    }

    for(int i =0; i<pos-1;i++){
        temp1 = temp1->next;
    }
    for(int j = 0; j<pos-2;j++){
        temp2 = temp2->next;
    }
    temp2->next = temp1->next;
    free(temp1);
    size--;

}

void print(){

    node* temp = head;
    printf("List is:");
    while(temp != NULL){
        printf(" %d", temp->value);
        temp = temp->next;
    }
    printf("\n");

}


int main() {
    head = NULL;


    insert(5,2);
    insert(2,2);
    insert(3,3);
    insert(4,4);
    insert(1,5);
    print();

    delete(1);
    print();

    return 0;
}