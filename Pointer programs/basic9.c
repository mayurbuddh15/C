#include<stdio.h>
void main()
{
int a=500;
int *p=&a;
*p=100;
int **w=&p;
int ***r=&w;
printf("%d\n",*p);
printf("%p\n",*w);
printf("%p\n",p);
printf("%d\n",**w);
**w=1222;
printf("%d\n",**w);
printf("%d\n",a);
printf("%d\n",***r);
***r=3232;
printf("%d\n",***r);
printf("%d\n",**w);
printf("%d\n",*p);
}
