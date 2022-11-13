#include<stdio.h>
void main(){
int i,j,m,n,num,pos;
printf("Enter the number\n");
scanf("%d",&num);
for(pos=8;pos>0;pos--)
printf("%d",num>>pos&1);
printf("\n");
for(i=0,j=4;i<4;i++,j++)
{
m=num>>i&1;
n=num>>j&1;

if(m!=n)
num=num^1<<i;
num=num^1<<j;
}
for(pos=8;pos>0;pos--)
printf("%d",num>>pos&1);
}
