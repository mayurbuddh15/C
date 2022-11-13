#include<stdio.h>
void main()
{
int a=258,*ip;
char *cp;
ip=&a;
printf("a=%d &a=%p p=%p *p=%d\n",a,&a,ip,*ip);
cp=(char *)&a;
printf("cp=%p &a=%p a=%d *cp=%d\n",cp,&a,a,*cp);



}
