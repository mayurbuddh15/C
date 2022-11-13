#include<stdio.h>
void main()
{
char s[10];
int i;
printf("Enter the string");
scanf("%s",s);
for(i=0;s[i];i++);
printf("%d\n",i);

}
