#include<stdio.h>
void main(){
int i;
printf("Enter the numer\n");
scanf("%d",&i);
if(i%2==0)
	 if((i&(i-1))==0)
printf("number is power of 2\n");
	else
printf("number is even");
else
printf("number is not power of 2\n");

}
