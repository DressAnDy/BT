#include <stdio.h>
#include <math.h>
void checkPrime(int n);
void countPrime(int n);
int SumOfPrime(int n);
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",n);
	return 0;
}

int SumOfPrime(int n)
{
	int i,sum = 0;
	for(i = 2 ; i <= n ; i++)
	{
		sum += i;
	}
	return sum;
}






void countPrime(int n)
 {
 	int i,count = 0;
 	for (i = 2 ; i <= n ; i++){
		count++;
	 }
	 printf("%d ",count);
 }



 
