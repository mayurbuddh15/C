#include<stdio.h>
struct one
{
char ch;
int i;
float f;

};
void main()
{
char ch;
struct one o1={'z',10,23.4};
printf("%c %d %f\n",o1.ch,o1.i,o1.f);


}
