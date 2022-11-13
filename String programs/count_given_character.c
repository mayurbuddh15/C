#include<stdio.h>
void main()
{
char s[20],ch;
int i,j,c=0;
printf("Enter the string\n");
scanf("%s",s);
printf("Enter the chacter\n");
scanf(" %c",&ch);
for(i=0,c=0;s[i];i++)
{
			if(s[i]==ch)
			c++;
}
printf("%d\n",c);
}
