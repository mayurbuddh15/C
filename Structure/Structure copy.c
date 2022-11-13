#include<stdio.h>
struct one
{
char ch;
int i;
float f;
};
void main()
{
struct one o1={'a',10,23.5},o2;
printf("%c %d %f\n",o1.ch,o1.i,o1.f);
printf("%c %d %f\n",o2.ch,o2.i,o2.f);
o2=o1;
printf("%c %d %f\n",o1.ch,o1.i,o1.f);
printf("%c %d %f\n",o2.ch,o2.i,o2.f);
}
