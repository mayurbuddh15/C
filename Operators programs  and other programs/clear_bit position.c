#include<stdio.h>
void main()
{
int num,pos;
printf("Enter the number and enter the position\n");
scanf("%d%d",&num,&pos);
printf("Before printing the number %d",num);
num=num&~(1<<pos);
printf("after printing the number %d",num);
}
