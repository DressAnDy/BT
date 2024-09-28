#include <stdio.h>
int main(){
	char ch;
	int nVowels = 0;
	int nConsonants = 0;
	int nOther = 0;
	do{
		ch = getchar();
		ch = toupper(ch);
		if (ch >= 'A' && ch <= 'Z'){
			switch (ch){
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U': nVowels++; break;
				default: nConsonants++;
				
			}
		}
		else nOther = nOther++;
	}
	while (ch != '\n');
	printf("%d",nVowels);
	printf("%d",nConsonants);
	printf("%d",nOther);
return 0;
}
