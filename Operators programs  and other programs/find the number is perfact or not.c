#include<stdio.h>
void main(){
int i,num,s;
printf("Enter the number\n");
scanf("%d",&num);
for(i=1,s=0;i<num;i++)
{
if(num%i==0)
s=s+i;
}
if(s==num)
printf("perfact number\n");
else
printf("not perfact number\n");
}
