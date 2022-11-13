#include<stdio.h>
void main(){
int i,pos;
printf("Enter the number and bit possition\n");
scanf("%d%d",&i,&pos);
printf("%d",(i>>pos)&1);





}
