#include <stdio.h>
int main ()
{
	int *p;
	p = (int *)malloc(sizeof(int));
	printf("&p = %d", &p);
	printf("\np = %d",p);
	
}
