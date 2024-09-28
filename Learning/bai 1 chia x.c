#include <stdio.h>
#include <math.h>
int main(){
	int i,x,n;
	double sum = 0;
	printf("Enter x = ");
	scanf("%d",&x);
	printf("Enter n = ");
	scanf("%d",&n);
	for(i = 1 ; i <= n ; i++){
		sum += (1 * 1.0 / pow(x,i) );  
	}
	printf("OUTPUT\n");
	printf("%.2lf",sum);
	return 0;
}
