#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node *next;
} node;

node *head;

void insert(int x){

    node* temp = (node*)malloc(sizeof(node));
    temp->value = x;
    temp->next = head;
    head = temp;
    
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

    printf("Enter the size of your list: ");
    int n, v;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        printf("Enter an element: ");
        scanf("%d",&v);
        insert(v);
    }

    print();

    return 0;
}
