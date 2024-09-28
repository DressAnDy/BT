#include <stdio.h>
void inputName(char name[][31],int n );
void outputName(char name[][31],int n);
int main()
{
	char name[31][31];
	int n;
	printf("Enter number of student: ");
	scanf("%d",&n);
	
	
	inputName(name,n);
	outputName(name,n);
	
	return 0;
}

void outputName(char name[][31],int n)
{
	int i;
	for(i = 0 ; i < n ; i++){
		puts(name[i]);
	}
}


void inputName(char name[][31],int n)
{
	int i;
	for(i = 0 ; i < n; i++)
	{
		fflush(stdin);
		printf("Name %d: ",i + 1);
		gets(name[i]);
	}
}
