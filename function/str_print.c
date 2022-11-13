#include<stdio.h>
void str_print(const char *);
void main()
{
char s[20];
printf("Enter the string\t");
scanf("%s",s);
str_print(s);
}
void str_print(const char *p)
{
int i;
for(i=0;p[i];p++)
printf("%c ",p[i]);
}
