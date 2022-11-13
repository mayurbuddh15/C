#include<stdio.h>
int  strstr(char *,char *);
void main()
{
	char s[20],s1[20],p;
	printf("Enter the first string\n");
	scanf("%s",s);
	printf("Enter the second string\n");
	scanf("%s",s1);
	p=strstr(s,s1);
	if(p!=0)
	{
		printf("%s is present @ %d in %s\n",s1,p,s);
	}
	else 
		printf("sub-string is not present\n");
}
int strstr(char *s,char *s1)
{	int i,j,c;
	for(i=0,c=0;s[i];i++)
	{
	if(s[i]==s1[0])
	{
		for(j=1;s1[j];j++)
		{	
			if(s1[j]!=s[i+j])
				break;
		}
			if(s1[j]=='\0')
			{
			 c++;
                        // printf("%s is present %d times",s1,c);
			}
		
	}	
	}	
			if(s1[j]=='\0')
			{
			// c++;
                        // printf("%s is present %d times\in",s1,c);
				return c ;
			}
}
