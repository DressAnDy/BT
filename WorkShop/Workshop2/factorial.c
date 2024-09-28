#include <stdio.h>


double factorial (int n){
	double p = 1;
	int i;
	for (i = 2 ; i <= n ; i ++ )
	{
	p *= i ;
	}
	return p;
}


int main(){
	int n;
	do{
		printf("Enter number: ");
		scanf("%d",&n);
	}while (n < 0);
	printf("factorial of number : %2.lf",factorial(n));
	return 0;
}
