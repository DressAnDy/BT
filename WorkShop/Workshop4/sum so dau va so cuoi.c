#include <stdio.h>
int main()
{
	int n,i;
	int a[1000];
	printf("Enter n: ");
	scanf("%d",&n);
	for(i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	printf("Sum = %d",a[0] + a[n - 1]);
	return 0;
}
