#include<stdio.h>
void main(){
char ch;
printf("Enetr the cahracter\n");
scanf("%c",&ch);
if(ch>='a'&& ch<='z')
printf("this is small character \n");
else if(ch>='A' && ch <'Z')
printf("this is capital character\n");
else
printf("this is spacial caracter\n");




}
