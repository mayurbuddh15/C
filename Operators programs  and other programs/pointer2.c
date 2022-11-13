#include<stdio.h>
void main()
{
int i=100;
int *p,*q;
p=q=&i;
*p=20;
printf("*p=%d *q=%d i=%d\n",*p,*q,i);
}
