#include<stdio.h>
void main()
{
	char s[50];
	int i,j,l,c;
	printf("Enter the string");
	scanf("%[^\n]",s);

	for(l=0,c=1;s[l];l++);
	for(i=0,c=1;s[i];i++)
	{
		if(s[i]!=32&&s[i+1]==32) 
			c++;
		else if(s[i]==32&&s[i+1]==32)
			s[i]=s[i+1];
		for(i=1,l;s[l]!=32;l--,i++)
		{
		
		s[l-i]=s[l];
		}
	}
	printf("%d\n",c);
}
