#include <stdio.h>
int CheckNumber(int n)
{
	if(n % 2 != 0){
		printf("The entered number is odd");
	}else{
		printf("The entered number is even");
	}
}

int main (int n )
{
	printf("Enter n: ");
	scanf("%d",&n);
	printf(CheckNumber(n));
	return 0;
}
