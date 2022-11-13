#include<stdio.h>
void main(){
int i=15,pos=4;
printf("%d\n",i|1<<pos);    // set bit 

printf("%d\n",i&~(1<<pos)); // clear bit 

printf("%d\n",i^(1<<pos));  // toggle bit 
}
