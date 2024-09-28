#include <stdio.h>
void swap (int *x , int *y )
{
	int t = *x;
	*x = *y;
	*y = t;
}
int main ()
{
	int a,b;
	scanf("%d%d",&a , &b);
	swap (&a , &b);
	printf("After swap: a = %d , b = %d",a,b);
	return 0;
}
