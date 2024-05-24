#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int size){

    int *p = arr;
    int temp = 0, counter = 0;

    for(int i = 0; i<size-1; i++){
        counter = 0;
        int j = i + 1;
        for(j ; j<size; j++){
            if(*(p+i) > *(p+j)){
                temp = *(p+j); // value is 5
                *(p+j) = *(p+i);
                *(p+i) = temp;
                j -=counter +1;
                counter = 0;
            } else{
                ++counter;
            }
        }
    }

}


int main() {

    int size;
    int element;
    printf("Enter the size of your array: \n");
    scanf("%d", &size);

    int *arr = (int*)malloc(size);


    printf("Enter the elements of your array: \n");
    for(int i = 0; i< size; i++){
        scanf("%d", &element);
        *(arr+i) = element;
    }

    sort(arr, size);

    for(int i = 0; i<size; i++){

        printf("%d\n", *(arr+i));
    }




    free(arr);
    return  0;
}
