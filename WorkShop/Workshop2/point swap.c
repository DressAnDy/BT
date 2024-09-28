#include <stdio.h>
void swapping (int *a , int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}


	int main(int n1 , int n2 )
{
	printf("Enter Num1 : ");
	scanf("%d", &n1);
	printf("Enter Num2 : ");
	scanf("%d", &n2);
	swapping(&n1,&n2);
	printf("After swapping: n1 = %d n2 = %d\n",n1 , n2);
	return 0;
}


