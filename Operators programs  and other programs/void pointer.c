#include<stdio.h>
void main()
{
char ch='a';
int i=10;
float f=21.2;
void *p;

p=&ch;
printf("%c\n",*(char *)p);

p=&i;
printf("%d\n",*(int *)p);

p=&f;
printf("%f\n",*(float *)p);


}