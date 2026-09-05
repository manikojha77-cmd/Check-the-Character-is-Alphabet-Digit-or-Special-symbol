#include<stdio.h>
int main()
{
	char ch;
	printf ("Enter the Character:");
	scanf("%c",&ch);
	if(ch>='0'&&ch<='9')
	printf("%c is a number digit",ch);
	else if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z'))
	printf("%c is a Alphabet",ch);
	else
	printf("%c is Special symbol");
	return 0;
}
