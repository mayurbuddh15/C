#include<stdio.h>
void main()
{
	char s[20],ch,c;
	int i;
	printf("Enter the string\n");
	scanf("%s",s);
	printf("Enter the character\n");
	scanf(" %c",&ch);
	printf("Enter the chacter which you want to replace\n");
	scanf(" %c",&c);
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			s[i]=c;
		}
	}
	printf("%s\n",s);
}
