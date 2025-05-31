#include<stdio.h>
#include<string.h>
void main()
{
	char s1[10],s2[10];
	printf("enter two string=");
	gets(s1);
	gets(s2);
	if(strcmp(s1,s2)==0)
	{
		printf("string are same");
	}
	else
	{
		printf("string are not same");
	}
	return 0;
}
