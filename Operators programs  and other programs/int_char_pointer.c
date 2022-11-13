#include<stdio.h>
void main()
{
int i=258;
int *ip;
char *cp;
ip=&i;
cp=(char*)&i;
printf("ip=%d cp=%d",*ip,*cp);


}
