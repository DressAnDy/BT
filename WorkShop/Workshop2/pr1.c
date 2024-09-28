#include <stdio.h>
#include <math.h>
	
int prime (int n){
	int m = sqrt(n);
	int i;
	if(n < 2 ) return 0;
	for ( i = 2 ; i <= m ; i++){
		if (n  % i == 0) return 0;
	}
	return 1;
}

int main(int n){
	int i;
	do{
		printf("Enter n: ");
		scanf("%d", &n);
		printf("Prime number between 2 and %d:\n",n);
	}while(n < 2);
	for(i = 2 ; i <= n ; i++)
	{
	if(prime(i))
	printf("%d ",i);
	}
	return 0;
}
