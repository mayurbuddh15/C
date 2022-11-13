#include<stdio.h>
void main()
{
char ch;
printf("Enter any character\n");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
printf("this is a small character");
else
if(ch>='A' && ch<='Z')
printf("this is a upper character");
else
if(ch>='0' && ch<='9')
printf("this become a digit value");
else
printf("this is a special case");





}
