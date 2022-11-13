#include<stdio.h>
void main()
{
int i=123;
int *p;
int *q;
p=q=&i;
*p=20;
printf("*p=%d *q=%d i=%d",*p,*q,i);




}
