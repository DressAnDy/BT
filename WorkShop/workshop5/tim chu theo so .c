#include <stdio.h>
int main()
{
	char s[1000];
	int k;
	scanf("%s",&s);
	scanf("%d",&k);
	printf("%c",s[k - 1]);
	return 0;
}
