#include<stdio.h>
void main()
{
int a;		//currently address of p is 205;
int *p;		// it is an integer pointer
p=&a;		// address of assining in p. so the value of p becomes 205
a=5;		// the vlaue of a is 5
printf("%p\n",p); //205
printf("%p\n",&a); //205
printf("%p\n",&p); //own p addreess EX:-1000
printf("%d\n",*p); //mean derefrencing (value will given (5))
*p=8;		//means value at p
printf("%d\n",*p);// print the new value
printf("%d\n",a);// print the new value



///////////////////////////////////////////////		(p is  a address & *p is value at that address stord in p)






}
