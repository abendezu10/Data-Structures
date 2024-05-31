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

void reverse(){
    node *current, *prev,*next;
    current = head;
    prev = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;

}


int main() {
    head = NULL;


    insert(2,1);
    insert(4,2);
    insert(6,3);
    insert(5,4);
    print();
    reverse();
    print();
    return 0;
}