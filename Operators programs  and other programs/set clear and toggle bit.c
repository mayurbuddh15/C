#include<stdio.h>
void main(){
int i=15,pos=4;
printf("%d\n",i|1<<pos);

printf("%d\n",i&~(1<<pos));

printf("%d\n",i^(1<<pos));
}
