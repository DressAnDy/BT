#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
    /*Bài 1: ArrayInArray:
tìm mảng trong mảng
hàm này nhận vào arr[], key[]
tìm mảng key có tồn tại trong mảng arr hay không
nếu có return index
nếu không return -1
    arr  : 2 3 2 1 3 2 5 2 2
    index: 0 1 2 3 4 5 6 7 8
    key  : 2 5
    return 5
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int arrayInArray(int array[], int size , int key[] , int sizeK);
int main()
{
    int arr[MAX];
    int size = 0;

    int key[MAX];
    int sizeK = 0;
    inputArray(arr , &size);

    inputArray(key, &sizeK);

    printf("%d",arrayInArray(arr , size , key , sizeK));

    return 0;


}

int arrayInArray(int array[], int size, int key[], int sizeK){
    for(int i = 0 ; i <= size - sizeK; i++){
        int check = 1;

        for(int j = 0 ; j < sizeK ; j++){
            if(array[i + j] != key[j]){
                check = 0;
                break;
            }
        }
        if(check){
            return i;
        }
    }
    return -1;
}

void inputArray(int array[], int* size){
    printf("\nNhap kich thuoc di: ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1 ; i++){
        printf("\nNhap Array[%d]: ",i);
        scanf("%d", &array[i]);
    }
}
