#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int i = 0;
	char s[100];
	printf("Enter string: ");
	scanf("%s", &s[i]);
	for(i=0;i<strlen(s);i++)
	{
		if(isalpha(s[i]))
		{
			printf("%c", s[i]);
		}
	}
	return 0;
}
