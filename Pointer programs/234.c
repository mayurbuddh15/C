#include<stdio.h>
void main()
{
int i=100,j;
int *p,*q;
p=&i;
j=(*p)++;

printf("&i=%p p=%d i=%d j=%d",&i,*p,i,j);




}
