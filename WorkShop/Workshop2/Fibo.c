#include <stdio.h>
double fibo(int n)
{
	int t1 = 1 , t2 = 1 , f = 1 ,i;
	for (i = 3 ; i <= n ; i++){
	f = t1 + t2;
	t1 = t2;
	t2 = f;
		}
		return f;
}

int main(int n)
{
	do{
		printf("Enter n: ");
		scanf("%d", &n);
	}
	while(n < 1 );
	printf("%2.lf\n",fibo(n));
	return 0;
}
