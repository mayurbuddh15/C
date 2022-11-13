#include<stdio.h>
void main(){
volatile int i=10;
printf("%d%d%d",++i,++i,++i);
}
