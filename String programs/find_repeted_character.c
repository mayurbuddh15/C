#include<stdio.h>
void main()
{
	char a[20],ch;
	int i,j,c=0,k,flag=0;
	printf("Enter the string\t");
	scanf("%s",a);
	printf("enter the character\t");
	scanf(" %c",&ch);
		for(j=0,c=0;a[j];j++)
			if(a[j]==ch)
			c++;
		printf("%c repeted %dtimes\n",ch,c);

}
