#include<stdio.h>
void main(){
int i,pos;
printf("Enter the number and bit position\n");
scanf("%d%d",&i,&pos);
printf("%d",i&~(1<<pos));
}
