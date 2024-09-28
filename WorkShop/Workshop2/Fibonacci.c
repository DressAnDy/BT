#include <stdio.h>
int isFibonacci(int n)
{
	int t1 =1 , t2 = 1 , f = 1;
	if(n == 1) return 1;
	while (f < n){
		f = t1 + t2;
		t1 = t2;
		t2 = f;
	}
	return n == f;
}



int main() 
	{
		int n;
		do{
			printf("Enter n: ");
			scanf("%d", &n);
		}
		while (n < 1);
		if(isFibonacci(n)){
			printf("It is a Fibonacci element");
		}
		else{
			printf("It is not a Fibonacci element,");
		}
		return 0;
	}
