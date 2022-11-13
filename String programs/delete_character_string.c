#include<stdio.h>
void main()
{
char s[20],b='\0';
int i;
printf("Enter the string\n");
scanf("%s",s);
for(i=0;s[i];i++)
{
if(s[i]=='e')
s[i]=b;
printf("%s",s);
}
printf("%s",s);



}
