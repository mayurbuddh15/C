#include<stdio.h>
void main()
{
int i=258;
char *ch;
ch=&i;
printf("*ch=%d\n",*ch);
*ch=*ch+1;
printf("*ch+1=%d\n",*ch);
printf("i=%d",i);


}
