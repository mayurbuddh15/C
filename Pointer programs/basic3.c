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
int a,*p,b;
a=10;
p=&a;	//address of a is strod in p
printf("address of p is %p\n",p);
printf("value at p is %d\n",*p);
b=20;
*p=b;
printf("address of p is %p\n",p);
printf("value at p is %d\n",*p);

}
