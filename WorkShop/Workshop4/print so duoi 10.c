#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[1000];
	for(i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	for(i = 0 ; i <n ; i++)
		if(a[i] >= 0 && a[i] <= 10){
			printf("%d ",a[i]);		
		}
	return 0;
} 
