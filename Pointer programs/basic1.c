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
printf("%p\n",p);	// this line give us address of p or we can say that address of a(pointer point to a )
printf("%d\n",*p);	//value at that adress of p
printf("%p\n",&a);	//address of a

}
