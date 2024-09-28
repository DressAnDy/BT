#include <stdio.h>
void tamgiac(int row)
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

int main(){
	tamgiac(7);
	return 0;
	
}
