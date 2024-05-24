#include <stdio.h>

int largestElement(const int arr[],int size){
    int element = arr[0];

    for(int i = 0; i< size; i++){
        if(element < arr[i]){
            element = arr[i];
        }
    }

    return element;
}

int main() {
    int num;
    int element;


    printf("Enter the size of your array: \n");
    scanf("%d", &num);
    int arr[num];

    printf("Enter the elements of your array:\n");
    for(int i = 0; i<num; i++){
        scanf("%d", &element);
        arr[i] = element;
    }

    printf("The largest element is %d", largestElement(arr, num));



    return 0;
}
