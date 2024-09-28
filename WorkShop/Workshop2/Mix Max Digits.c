#include <stdio.h>

int printMinMaxDigits(int n ){
	int digit;
	int min,max;
		int remainder;
	digit = n % 10;
	n = n/10 ;
	min = max = remainder;
	while (n > 0){
		digit = n % 10;
		n = n/10;
		if(min > remainder ) min = remainder;
		if(max < remainder) max = remainder;
	}
	printf("%d", min);
	printf("%d",max);
}


int main (int n)
{	
	do{
	scanf("%d", &n);
	printf(printMinMaxDigits(n));
	}
	while (n > 0);
	return 0;
}
