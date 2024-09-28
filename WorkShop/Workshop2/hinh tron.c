#include <stdio.h>
int getRelPos (double x, double y , double r)
{
		double d2 = (x*x) + (y*y);
		double r2 = r * r;
		if (d2 < r2) 
			return 1;
		else if (d2 == r2) 
			return 0;
		return -1;
}

int main (double x , double y , double r)
{
	printf("Enter x: ");
	scanf("%lf", &x);
	
	printf("Enter y: ");
	scanf("%lf", &y);
	
	do{
		printf("Enter r: ");
		scanf("%lf",&r);
		
	}while (r < 0);
	int result = getRelPos(x,y,r);
	
	if (result == 1)
	printf("The point is in circle\n");
	
	else if (result == 0 )
	printf("The point is on circle\n ");	
	
	else
		printf("The point is out of circle\n");
	return 0;
}
