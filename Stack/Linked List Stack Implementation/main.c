#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int value;
    struct Node* next;
}node;
node *head;

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

void pop(){
    int i = 0;
    node *temp1 = head;
    node *temp2 = temp1->next;

    if(size == 1){
        free(temp1);
        size--;
        return;
    }


    while(i < size-2){
        temp1 = temp1->next;
        temp2 = temp2->next;
        i++;
    }


    temp1->next = temp2->next;
    free(temp2);
    size--;

}

void isEmpty(){

    if(size == 0 ){
        printf("The stack is empty.\n");
    } else{
        printf("The stack is not empty.\n");

    }

}


void top(){
    node *temp = head;
    if(size == 1){
        printf("The top of the stack is: %d\n", temp->value);
        return;
    }

   for(int i =0; i<=size-2;i++){
       temp = temp->next;

   }
    printf("The top of the stack is: %d\n", temp->value);


}

void print(){
    if(size ==0){
        printf("The stack is empty.\n");
        return;
    }

    node *temp = head;


    printf("The stack is: [");

    while(temp != NULL){
        printf(" %d", temp->value);
        temp = temp->next;
    }
    printf(" ]\n");

}

int main() {
    head = NULL;

    isEmpty();
    push(8);
    top();
    push(9);
    top();
    isEmpty();
    print();
    pop();
    print();
    top();

    return 0;
}
