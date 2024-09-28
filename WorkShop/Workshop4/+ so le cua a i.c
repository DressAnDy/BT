#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[1000];
	for(i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	int sum = 0;
	for(i = 0 ; i < n ; i++){
		if(a[i] % 2 != 0 && a[i] > 0){
			sum += a[i];
		}
	}
	printf("Sum = %d",sum);
	return 0;
}
