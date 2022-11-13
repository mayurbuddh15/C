#include<stdio.h>
void main()
{
int i=258;
char *cp;
cp=(char*)&i;
printf("%d\n",*cp);
*cp=*cp+2;
printf("%d\n",*cp);
printf("%d\n",i);







}
