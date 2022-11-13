#include<stdio.h>
void main(){
float f=23.5,pos;
int *ip=(int *)&f;
for(pos=31;pos>=1;pos--)
{
printf("%d",*ip>>pos&1);
}
}
