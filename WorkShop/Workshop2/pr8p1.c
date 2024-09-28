#include <stdio.h>
#include <math.h>
int Checkprime(int n)
{
	int i;
	if(n < 0) return 0;
	for (i = 2 ; i <= sqrt(n) ; i++)
	{
		if (n % i == 0)
		return 0;
	}
	return 1;
}



int main(int n)
{
	printf("Enter n to check : ");
	scanf("%d",&n);
	if(Checkprime(n))
		printf("The number %d is a prime number",n);
	else{
		printf("The number %d is not a prime number",n);
	}
	return 0;
}
