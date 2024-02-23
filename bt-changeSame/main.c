#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;

void changeSame(int array[], int size);
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int main()
{
    int arr[MAX];
    int size = 0;
    inputArray(arr , &size);
    changeSame(arr, size);
    outputArray(arr , size);
    return 0;
}


//
void changeSame(int array[], int size){
    for(int i = 0 ; i <= size - 1 ; i++){
        for(int j = 1 ; j < size; j++){
            int count = 1;
            if(array[i] != 0 && array[j] != 0){
                if(array[j] != 0 && array[i] == array[j]){
                    count = 0;
                }
                if(count ==  0){
                    array[j] = 0;
                }else{
                    count = 1;
                }
            }
        }
    }
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
    for(int i = 0 ; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
