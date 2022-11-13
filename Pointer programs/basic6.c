#include<stdio.h>
void main()
{
int a=1025,*p;
p=&a;
printf("sizeof integer is %d bytes\n",sizeof(int));
printf("address =%p and value is %d\n",p,*p);
//void pointer- Generic pointer
void *p0;
p0=p;
printf("Address =%p",p0);
}
