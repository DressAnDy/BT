#include <stdio.h>
#include <math.h>
void outputArray (int a[],int n);
void inputArray (int a[],int n);
void odd(int a[],int n);
void even(int a[],int n);
int isPrime(int n);
void CheckPrime(int a[],int n);
int Sum(int a[],int n);
void Count(int a[],int n);
int SumofEvenIndex(int a[],int n);
int SumofOddIndex(int a[],int n);
int main ()
{
	int a[50],n;
	printf("Enter number of array: ");
	scanf("%d",&n);
	inputArray(a,n);
	outputArray(a,n);
	printf("\n-----------------");
	printf("\nMax = %d",max(a,n));
	printf("\n-----------------");
	printf("\nMin = %d",min(a,n));
	printf("\n-----------------");
	printf("\nEven: ");
	even(a,n);
	printf("\n-----------------");
	printf("\nOdd: ");
	odd(a,n);
	printf("\n-----------------");
	CheckPrime(a,n);
	printf("\n-----------------");
	printf("\nSum: ");
	Sum(a,n);
	printf("\n-----------------");
	printf("\nCount: ");
	Count(a,n);
	printf("\n-----------------");
	printf("\nSum Of Even Index: ");
	SumofEvenIndex(a,n);
	printf("\n-----------------");
	printf("\nSum Of Odd Index: ");
	SumofOddIndex(a,n);
	
}


void inputArray (int a[],int n)
{
	int i;
	for(i = 0 ; i <n ; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		
	}
}
	
	
void outputArray (int a[],int n)
{
	int i;
	for( i = 0 ; i < n;i++)
	{
		printf("%d\t",a[i]);
	}
}


int max(int a[],int n)
{
	int i;
	int max = a[0];
	for(i = 1 ; i < n; i++){
		if( max < a[i]){
			max = a[i];
	}
	}
		return max;
}

int min(int a[],int n)
{
	int i;
	int min = a[0];
	for(i = 0 ; i < n; i++){
		if(min > a[i]){
			min = a[i];
		}
	}
	return min;
}

void even(int a[], int n)
{
	int i;
	for (i = 0 ; i < n;i++)
	{
		if (a[i] % 2 == 0)
			printf("%d ",a[i]);
	}
}

void odd(int a[], int n)
{
	int i;
	for (i = 0 ; i < n;i++)
	{
		if (a[i] % 2 != 0)
			printf("%d ",a[i]);
	}
}

int isPrime(int n)
{
	int i;
	if (n <= 1 )
		return 0;
		
	for (i = 2; i <= sqrt(n) ; i++){
		if (n % i == 0)
		return 0;
	}
	return 1;
}

void CheckPrime(int a[],int n)
{
	printf("\nPrime Number: ");
	int i;
	for (i = 0 ; i < n ; i++)
	{
		if(isPrime(a[i]))
			printf("%d ",a[i]);
	}
}

int Sum(int a[],int n)
{
	int i;
	int sum = 0;
	for(i = 0 ; i < n;i++)
	{
		sum += a[i];
	}
	printf("%d",sum);
	return sum;
}

void Count(int a[],int n)
{
	int count;
	int i;
	for(i = 0 ; i < n;i++){
		count++;
	}
	printf("%d",count);
}

int SumofEvenIndex(int a[],int n )
{
	int i;
	int sum = 0;
	for(i = 0 ; i < n ; i++)
	{
		if(i % 2 == 0)
			sum += a[i];
	}
	printf("%d",sum);
	return sum;
}


int SumofOddIndex(int a[],int n )
{
	int i;
	int sum = 0;
	for(i = 0 ; i < n ; i++)
	{
		if(i % 2 != 0)
			sum += a[i];
	}
	printf("%d",sum);
	return sum;
}

