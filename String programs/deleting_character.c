#include<stdio.h>
void main()
{
char s[20],ch;
int i,j,c;
printf("Enter the string\n");
scanf("%s",s);
printf("Enter the chacter which you want to delete\n");
scanf(" %c",&ch);
for(i=0;s[i];i++)
{
	if(s[i]==ch)
{
	for(j=i,c=0;s[j];j++)
	{
	s[j]=s[j+1];
	}
}
}
printf("%s\n",s);

}
