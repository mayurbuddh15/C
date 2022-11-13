#include<stdio.h>
void main()
{
char s[20],d[20];
int i;
printf("Enter the source string");
scanf("%s",s);
printf("source string is\n %s\n",s);
for(i=0;s[i];i++)
{
d[i]=s[i];
}
d[i]=s[i];
printf("destination srting is \n %s\n",d);
}
