#include<stdio.h>
void main()
{
int num,pos=4,n=8;
printf("Enter the number\n");
scanf("%d",&num);
num=num^n;
if(num>>pos&1)
{
printf("not div\n");
}
else
{
printf("div not\n");
}
}
