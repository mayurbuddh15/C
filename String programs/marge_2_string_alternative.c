#include<stdio.h>
void main()
{
	char s[10],s1[10],w[20];
	int i,j;
	printf("Entr the s \n");
	scanf("%s",s);
	printf("Enter the s1\n");
	scanf(" %s",s1);
	for(i=0,j=0;s[i] && s1[i];i++)
	{
		w[j++]=s[i];
		w[j++]=s1[i];
	}
	if(s[i])
	{
		for(;s[i];i++)	
		w[j++]=s[i];	
	}
	else if(s1[i])
	{
		for(;s1[i];i++)	
		w[j++]=s1[i];
	}
	w[j]='\0';
	printf("w=%s\n",w);


}
