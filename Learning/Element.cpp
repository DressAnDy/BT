#include <stdio.h>
void intput2DArray(int a[][20],int r,int c);
void output2DArray(int a[][20],int r,int c);
int main()
{
	int a[20][20], r, c;
	printf("------------------Row and Colum-------------------\n");
	printf("1.Sum element\n");
	printf("2.Print even\n");
	printf("3.Sum element row = col\n");
	
}

int SumofElement(int a[][20],int r,int c)
{
	int i,j;
	int sum = 0;
	for (i = 0; i < r;i++){
		for(j = 0 ; j < c;j++){
			sum += a[i][j];
		}
		return sum;
	}
}

void printEvenElements(int a[][20], int r, int c)
{
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] % 2 == 0) {
                printf("%d ", a[i][j]);
            }
        }
    }
}

int sumRowEqualCol(int a[][20], int r, int c)
{
    if (r != c) {
        printf("Number of rows must be equal to the number of columns!\n");
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < r; i++) {
        sum += a[i][i];
    }
    return sum;
}
