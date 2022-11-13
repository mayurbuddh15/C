#include<stdio.h>
void main()
{
int i,pos;
printf("Enter the number and position\n");
scanf("%d%d",&i,&pos);
printf("before number=%d\n",i);
i=i|1<<pos;                 // set bit 
printf("after number=%d\n",i);
}
