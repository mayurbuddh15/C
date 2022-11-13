#include<stdio.h>
struct m1
{
char ch;
int i;
float f;
};
struct m1  hello1(void);
void main()
{
struct m1 a1;
a1=hello1();
printf("%c %d %f",a1.ch,a1.i,a1.f);
}
struct  m1 hello1(void)
{
struct m1 a={'a',12,12.3};
return a;
}
