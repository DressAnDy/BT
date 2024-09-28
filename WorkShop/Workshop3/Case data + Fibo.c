#include <stdio.h>
double Fibonacci(int n);
int CheckDate(int d,int m,int y);
int main (int n)
{  
	int choice;
	int d,m,y;
	do{
		printf("Select process\n");
		printf("1.Fibonacci\n");
		printf("2.CheckDate\n");
		printf("3.Quit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1: {
					do{
						printf("Enter number: ");
						scanf("%d",&n);
						}
						while(n < 0);
						printf("%2.lf\n",Fibonacci(n));
					break;
					}
			case 2:{
				do{
					printf("Enter Day/Month/Year: ");
					scanf("%d/%d/%d",&d,&m,&y);
					}
					while(n < 0);
					if(CheckDate(d,m,y))
						printf(	"vaid date\n");
					else{
						printf("invaid date\n");
					}
				break;
				}
			}
		} while(choice > 0 && choice < 3);
		return 0;
}


double Fibonacci(int n)
{
	int t1 = 1 , t2 = 1, f =1,i;
	for (i = 3 ; i <= n ; i++){
		f = t1 + t2;
		t1 = t2;
		t2 = f;
	}
	return f;
}

int CheckDate(int d,int m,int y){
		int maxd=31;
		if(d < 1 || d > 31 || m < 1 || m > 12)	return 0;
		if(m == 4 || m == 6 || m == 9 || m == 11) maxd = 30;
		else if (m == 2){
			if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0 ) maxd =29;
			else maxd = 28;
		}
		return d <= maxd;
}



