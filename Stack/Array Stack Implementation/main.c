#include <stdio.h>
#include <stdlib.h>

int size = 0;

void push(int value, int arr[]){
    if(size == 0){
        *arr = value;
        size++;
        return;
    }
    *(arr+size) = value;
    size++;
}

void pop(int arr[]){

    int i = 0;
    int temp;
    while(*(arr+i)!= NULL){
        i++;
        if(i==size-1){
            *(arr+i) = 0;
        }
    }
    size--;
}


void print(int arr[]){

    int i = 0;
    printf("The list is: [");
    while(*(arr+i)!= NULL){
        printf(" %d", *(arr+i));
        i++;
    }
    printf(" ]\n");

}
int main() {

    int s;
    printf("What is the size of the array: ");
    scanf("%d", &s);
    int* arr = (int*)malloc(s*sizeof(int));

    push(5, arr);
    push(6, arr);
    push(7, arr);
    print(arr);
    pop(arr);
    print(arr);
    push(7, arr);
    print(arr);

    free(arr);
    return 0;
}
