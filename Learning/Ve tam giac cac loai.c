#include <stdio.h>
void trianglel(int row);
void trianglel2(int row);
void triangle3(int row);
int Multiplicationtable (int n);

int main()
{
	int choice,n,i;
	do
	{
		printf("\n-----------------------\n");
		printf("1. trianglel 1\n");
		printf("2. trianglel 2\n");
		printf("3. trianglel 3\n");
		printf("4. Multiplication table\n");
		printf("Other-quit");
		printf("\n------------------------\n");
		scanf("%d", &choice);
		switch(choice)
			{
				case 1:
				{
					printf("Enter number of row: ");
					scanf("%d", &n);
					trianglel(n);
					break;
				}
				case 2:
				{
					printf("Enter number of row: ");
					scanf("%d", &n);
					trianglel2(n);
					break;
				}
				case 3:
				{
					printf("Enter number of row: ");
					scanf("%d", &n);
					triangle3(n);
					break;
				}
				case 4:
				{
					printf("Enter number of multiplication: ");
					scanf("%d", &n);
					Multiplicationtable(n);
					break;
				}
				default:
					printf("bibi");
			}
	}while(choice > 0 && choice < 5);
	return 0;
}



void trianglel2(int row) //ve tam giac dung nguoc giam dan
{
	int i,j;
	for(j = 0 ; j < row;j++)
	{
		for( i = 0 ; i < row - j ; i++)
		printf("*");
		printf("\n");
	}
}


void trianglel(int row){
	//ve tam giac trai
	int i,j;
	for(j = 0 ; j < row ;j++)
	{
		for ( i = 0 ; i < j + 1 ; i++)
			printf("*");
		printf("\n");
		}	
}

void triangle3(int row)
//ve tam giac phai
{
	int i,j,k;
	for (j = 0 ; j < row ; j ++){
		for(k = 0 ; k < row - j ; k ++)
			printf(" ");
		for (i = 0 ; i < j+1 ; i++)
		printf("*");
		printf("\n");
	}
}

int Multiplicationtable(int n){
	int i;
	for (i = 0; i <= 10 ; i++)
		printf("%d x %d = %d\n",n ,i , n * i);

}
	
	
	
	
	
