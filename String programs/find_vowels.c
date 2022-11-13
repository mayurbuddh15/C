#include<stdio.h>
void main()
{
	char a[20],s[5],b;
	int c,i,j,x;
	printf("Enter the string\t");
	scanf("%s",a);
	printf("Enter the vowels\t");
	scanf(" %c",s);
	for(i=0,c=0;a[i];i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]==s[j])
			a[j]=s[j];
		}
			printf("%s present",a[j]);
	}
}
