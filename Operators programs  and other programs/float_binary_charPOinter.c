#include<stdio.h>
void main()
{
float f=63.8;
char *p;
int i,pos,*l;
l=(int*)&f;
p=(char*)&f;
//p=p+3;
printf("63.5 binary\n");
for(i=31;i>=0;i--)
printf("%d",*l>>i&1);printf("\n");
for(p=p+3;p>=(char*)&f;p--){
for(pos=7;pos>=0;pos--)
printf("%d",*p>>pos&1);}

printf("\n");
}
