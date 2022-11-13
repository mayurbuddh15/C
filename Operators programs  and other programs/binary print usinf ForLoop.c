#include<stdio.h>
void main(){
int i,num,pos;
printf("Enter the number\n");
scanf("%d",&num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
}
