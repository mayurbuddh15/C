/*int a; 		// integer
int *p;		// integer pointer
char c;		//character
char *p0;	//character pointer
double d;	//double
double *p1;	//double pointer
*/
#include<stdio.h>
void main()
{
int a,*p;
a=10;
p=&a;	//address of a is strod in p
printf("a=%d\n",a);
*p=12;	//derefrencing (modify the value at pointer is pointing to that address)
printf("a=%d\n",a);
}
