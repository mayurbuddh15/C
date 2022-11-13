#include<stdio.h>
void main(){
int num,pos,c=0;
printf("Enter the number and bit position\n");
scanf("%d%d",&num,&pos);
if(pos>=0 && pos <=31){
	if(num&1<<pos)
	printf("set..\n");
	else
	printf("clear..\n");
}
}
