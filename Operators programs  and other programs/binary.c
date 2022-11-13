#include<stdio.h>
void main(){
int num,pos;
printf("Enter the number\n");
scanf("%d",&num);
pos=sizeof(num)*8-1;
L1:
printf("%d",num>>pos&1);
pos--;
if(pos>=0)
goto L1;
printf("\n");
}
