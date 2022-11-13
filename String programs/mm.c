#include<stdio.h>
int str_cmp(char *,char *);
void main()
{
	char s[10],m[10],c=0;
	int i,j,a,b;
	printf("Enter the first string\t");
	scanf("%[^\n]",s);
	printf("Enter the second string\t");
	scanf(" %[^\n]",m);
	b=str_cmp(s,m);
	if(b>0)
	printf("same string c=%d\n",b);
	else 
	printf("different string\n");
	
}
int str_cmp(char *s,char *m)
{
	int i,j,a,b,c=0;
	for(a=0;s[a];a++);
	for(b=0;m[b];b++);
	if(a==b)
	{
	for(i=0;s[i];i++)
            {		
         	if(s[i]!=m[i])
	
             	c++;
	
	
       }
}

	
	if(c!=0)return 0;else return c;
}
