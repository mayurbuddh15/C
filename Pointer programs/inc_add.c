#include<stdio.h>
void main()
{
int a=512;
char *c;
c=&a;

printf("c=%d\n",*c);
c=c+1;
printf("c=%d\n",*c);





}
