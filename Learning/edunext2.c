#include <stdio.h>
#include <math.h>

int SumPrime(int n){
	int i;
	int sum = 0;
	for(i = 2 ; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

int countPrime(int n)
	{	
		int i;
		int count = 0;
		for(i = 2 ; i <= n ; i++){
			count++;
		}
		return count;
	}	
	
int main()
	{
		int n;
		printf("Enter n: ");
		scanf("%d", &n);
		printf("Count = %d ", countPrime(n));
		printf("Sum = %d ",SumPrime(n));
		return 0;
	}
