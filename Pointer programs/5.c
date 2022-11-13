#include<stdio.h>
void main()
{
int a;
int *const ia=&a;
printf("a=%d ia=%p &a=%p\n",a,ia,&a);
*ia=124;
printf("a=%d ia=%p &a=%p\n",a,ia,&a);





}
