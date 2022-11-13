#include<stdio.h>
void main(){
char ch;
printf("Enetr the cahracter\n");
scanf("%c",&ch);
if(ch>='a'&& ch<='z')
printf("this is small latter\n");
else if(ch>='A' && ch <'Z')
printf("this is upper letter\n");
else
printf("this is spacial letter\n");




}
