#include<stdio.h>
void main()
{
	char s[10],b[10];
	int i,j;
	printf("Enter the first string\n");
	scanf("%s",s);
	printf("Enter the second string\n");
	scanf("%s",b);
	for(i=0;s[i];i++)
{
	if(s[i]!=b[i])
	{
		break;
	}
}
	if(s[i]==b[i])
		{
		printf("equal");
		}
	else
	printf("not equal");

}
