#include <stdio.h>
void Print(int n){
	int i;
	for(i = 0 ; i <= n ; i++)
		if(i % 2 == 0)
		printf("%d\t", i);
}


int count(int n)
{
	int i;
	int count = 0;
	for(i = 0; i <= n ; i++)
		if(i % 2 ==0 ){
			count++;
}
return count;
}

int sum(int n)
{
	int i;
	int s = 0;
	for(i = 0 ; i <= n ; i++)
		if(i % 2 ==0)
		{
			s += i;
		}
		return s;
}

int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	Print(n);
	int result = sum(n);
	printf("\nSum = %d",result);
	printf("\nCount = %d",count(n));
	return 0;
}
