#include <stdio.h>
#include <math.h>

float SquareNumber(int n ){
	float square = n*n;
	return square;
}

int main(int n ){
	printf("Input any number for square: ");
	scanf("%d", &n);
	printf("The Square of %d is: %.2f ",n,SquareNumber(n));
	return 0;
}





