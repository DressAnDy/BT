#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;

void inputArray(int array[], int* size);
void outputArray(int array[], int size);
void reverse(int array[], int size);
int main()
{
    int arr[MAX];
    int size;
    inputArray(arr , &size);
    reverse(arr , size);

    outputArray(arr , size);
    return 0;
}

void inputArray(int array[], int* size){
    printf("\nNhap kich thuoc di: ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1 ; i++){
        printf("\nNhap Array[%d]: ",i);
        scanf("%d", &array[i]);
    }
}

void outputArray(int array[], int size){
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", array[i]);
    }
}

void reverse(int array[], int size){
    for(int i = 0 ; i <= (size/2)- 1 ; i++){
        int tmp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = tmp;
    }
}
