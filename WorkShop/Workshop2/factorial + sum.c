#include <stdio.h>
int factorial(int num)
{
	int factorial = 1;
	int i;
	for(i = 1 ; i <= num ; i++){
		factorial = (factorial * i);	
	}
	return factorial;
}

int sum(int num)
{
	int i;
	int n = 5;
	int sum = 0;
	for (i = 1; i <= n	; i++)
	{
		sum += factorial(i) / i;
	}
	return sum;
}

int main ()
{
	int num;
	printf("%d",sum(num));
}
