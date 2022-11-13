#include<stdio.h>
void main(){
int i=123,j=0,k;
k=i&&j;
printf("%d\n",k);	//k=0
k=i||j;
printf("%d\n",k);	//k=1
k=!k;
printf("%d\n",k);



}
