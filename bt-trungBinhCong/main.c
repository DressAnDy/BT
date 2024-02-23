#include <stdio.h>
#include <stdlib.h>


float trungBinhCong(int number);
int main()
{
    int n;
    printf("\nEnter number: ");
    scanf("%d", &n);
    float result = trungBinhCong(n);
    printf("%.2f", result);
    return 0;
}

float trungBinhCong(int number){
    float trungBinhCong;
    int count =  0;
    int sum = 0;
    while(number != 0){
        int change = number % 10;
        sum += change;
        number /= 10;
        count++;
    }
    trungBinhCong = (float)(sum / count);
    return trungBinhCong;
}
