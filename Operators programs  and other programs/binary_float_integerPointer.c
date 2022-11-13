#include<stdio.h>
void main()
{
int *ip,pos;
float f=23.5;
ip=(int*)&f;
for(pos=31;pos>=0;pos--)
{
printf("%d",*ip>>pos&1);
}
printf("\n");
}
