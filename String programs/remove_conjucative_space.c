#include<stdio.h>
void main()
{
	char s[50];
	int i,j;
	printf("ENter the string\t");
	scanf("%[^\n]",s);
	for(i=0;s[i];i++)
	{
		if(s[i]==' '&&s[i+1]==' ')
		{
		for(j=0;s[j];j++)
		{
			s[j]=s[j+1];
		}
		}
	}
	printf("%s",s);

}
