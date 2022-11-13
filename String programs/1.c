#include<stdio.h>
void main()
{
char s[10];
printf("Enter the string\n");
scanf("%[^\n]",s);
printf("%s",s);
//s[1]='\0';
printf("s+2=%s\n",s+2);

}
