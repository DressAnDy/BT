#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[1000];
	for(i = 0 ; i < n; i++){
		scanf("%d",&a[i]);
	}
	int MaxValue = a[0];
	for(i= 0 ; i <= n; i++){
		if(a[i] > MaxValue){
			MaxValue = a[i];
		}
	} 
	printf("%d",MaxValue);
	return 0;
}
