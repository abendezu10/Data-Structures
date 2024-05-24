#include <stdio.h>
#include <stdlib.h>
int size = 0;
int count = 0;

void countArr(){
    printf("The total number of elements in the array is: %d\n", count);
    printf("\n-----------------------------\n");
}

void insertElement(int arr[], int index, int value){


    if(index >= size) size*= 2;

    *(arr + index) = value;
    count++;
}

void removeElement(int arr[], int value,int size){

    for(int i = 0; i<size; i++){
        if(value == *(arr+i)){
            *(arr+i) = 0;
        }
    }
}

void readValue(const int arr[], int index){

    int value = *(arr+index);

    printf("The value at the index is: %d\n", value);
    printf("\n-----------------------------\n");
}

void readArray(int arr[], int size){
    printf("The array is: [ ");
    for(int i = 0; i< size; i++){
        printf("%d ", *(arr+i));
    }
    printf("]");
    printf("\n-----------------------------\n");


}

int main() {

    printf("Enter the size of your array: ");
    scanf("%d", &size);

    int arr[size];
    int *pArr = arr;

    insertElement(pArr, 0, 10);
    insertElement(pArr, 1, 40);
    insertElement(pArr, 2, 212);
    insertElement(pArr, 3, 432);
    insertElement(pArr, 4, 102);
    countArr();
    readValue(pArr,3);
    readArray(pArr, size);
    removeElement(pArr, 10, size);
    readArray(pArr, size);

    insertElement(pArr, 8, 120);
    insertElement(pArr, 9, 1024);
    insertElement(pArr, 7, 1220);
    insertElement(pArr, 6, 3120);
    insertElement(pArr, 5, 5120);

    countArr();
    readArray(pArr, size);



    return 0;
}
