#include<stdio.h>
void main()
{
char s[5][10];
int i,ele;
ele=sizeof(s)/sizeof(s[0]);
printf("Enter the string\n");

for(i=0;i<ele;i++)
scanf("%s",s[i]);
for(i=0;i<ele;i++)
printf("%s",s[i]);
}
