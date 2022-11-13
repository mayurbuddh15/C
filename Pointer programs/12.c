#include<stdio.h>
void main()
{
int i=258;
char *p;
p=&i;
printf("&i=%p p=%p\n",&i,p);
*p=*p+1;
printf("&i=%p p=%p\n",&i,p);
printf("i=%d *p=%d\n",*p);





}
