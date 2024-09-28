#include<stdio.h>
void printMinMaxDigits(int n){
	
int digit;
int min, max;
int remainder;
digit = n % 10;
n = n /10;
min = max = remainder=digit;
while(n>0)
{remainder = n % 10;
	n= n /10;
	if( min > remainder)
	min= remainder;
	if ( max< remainder)
	max= remainder;
}
printf("%d%d\n", min, max);
}
int main()
{
	int n;
	do 
	{
		scanf("%d", &n);
		printMinMaxDigits(n);
	}
	while(n<=0);
	return 0;
	
}
