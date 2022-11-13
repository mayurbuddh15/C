#include<stdio.h>
void main()
{
int i=256;
int *p;
char *q;
p=&i;
q=&i;
printf("%p\n",&i);
printf("p=%p p+1=%p\n",p,p+1);
printf("q=%p q+1=%p\n",q,q+1);








}
