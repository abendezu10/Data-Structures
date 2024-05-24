#include <stdio.h>

int firstElement(const int arr[],int size){
    int element = arr[0];

    for(int i = 0; i< size; i++){
        if(element < arr[i]){
            element = arr[i];
        }
    }
    return element;
}

int secondElement(const int arr[], int size, int first){
    int result;
    int dist = first - arr[0];
    for(int i = 0; i<size; i++){
        if((first - arr[i]) < dist && first - arr[i] != 0){
            result = arr[i];
            dist = first - arr[i];
        }
    }

    return result;
}

int main() {
    int num;
    int element;
    int first;
    int second;

    printf("Enter the size of your array: \n");
    scanf("%d", &num);
    int arr[num];

    printf("Enter the elements of your array:\n");
    for(int i = 0; i<num; i++){
        scanf("%d", &element);
        arr[i] = element;
    }

    first = firstElement(arr, num);
    second = secondElement(arr, num, first);

    printf("The largest element is %d\n", first);
    printf("The second largest element is %d\n",second);



    return 0;
}