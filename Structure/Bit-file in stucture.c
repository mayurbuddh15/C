#include<stdio.h>
struct m1
{
int i;
char ch;
unsigned int j:6;
float f;
};
void main()
{
struct m1 a;
a.j=1;
int c=0;
while(a.j)
{
c++;
printf("a.j=%d\n",a.j);
a.j=a.j<<1;
}
printf("%d\n",c);
}
