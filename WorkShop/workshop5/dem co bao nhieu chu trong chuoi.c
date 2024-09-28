#include <stdio.h>
#include <string.h>
int main()
{
	char s[31];
	gets(s);
	char c;
	scanf("%c",&c);
	int count = 0,i;
	for(i = 0 ; i < strlen(s); i++){
		if(c == s[i]){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
