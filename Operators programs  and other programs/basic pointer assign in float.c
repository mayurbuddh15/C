#include<stdio.h>
void main(){
float f=23.5,*fp;
int *ip;
fp=&f;
ip=(int *)&f;
printf("ip=%d fp=%f",*ip,*fp);





}
