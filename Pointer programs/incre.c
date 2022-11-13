#include<stdio.h>
void main()
{
int a=10,j;
int *p=&a;
printf("p=%p &a=%p\n",p,&a);
j=++*p;
printf("p=%p &j=%p\n",p,&j);
printf("*p=%d j=%d a=%d\n",*p,a,j);



}
