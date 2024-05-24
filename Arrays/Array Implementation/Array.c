#include <stdio.h>
#include <stdlib.h>
int size = 0;
int count = 0;

void insertElement(int arr[], int index, int value){
    *(arr +index) = value;
    count++;
}

void removeElement(int arr[], int value,int size){

    for(int i = 0; i<size; i++){
        if(value == *(arr+i)){
            *(arr+i) = 0;
        }
    }
}

int readValue(const int arr[], int index){

    int value = *(arr+index);

    return value;
}

int main() {

    printf("Enter the size of your array: ");
    scanf("%d", &size);

    int arr[size];
    int *pArr = arr;

    insertElement(pArr, 3, 10);
    insertElement(pArr, 5, 40);
    insertElement(pArr, 6, 212);
    insertElement(pArr, 2, 432);

    printf("The value at the index is: %d\n", readValue(pArr, 3));

    for(int i =0; i<size;i++){

        printf("%d\n", *(pArr+i));
    }
    printf("---------------\n");
    removeElement(pArr, 10, size);

    for(int i =0; i<size;i++){

        printf("%d\n", *(pArr+i));
    }

    return 0;
}
