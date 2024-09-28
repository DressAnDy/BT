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
	int k;
	printf("Enter K: ");
	scanf("%d",&k);
	int count = 0;
	for(i = 0 ; i < n ; i++){
		if(a[i] == k ){
			count++;
		}
	}
	printf("How many number same of %d: %d",k,count);
	return 0;
}
