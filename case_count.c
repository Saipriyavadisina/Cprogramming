#include<stdio.h>
int main()
{
	char s[100];
	int upcount = 0, lowcount = 0;
	int i = 0;
	scanf("%[^\n]%*c", s);
	for(i = 0; s[i] != '\0'; i++)
	{
		if(isupper(s[i]))
		upcount++;
		else if(islower(s[i]))
		lowcount++;
	}
	printf("Uppercase Letters=%d\nLowercase Letters=%d", upcount, lowcount);
	return 0;
}
