/*int a; 		// integer
int *p;		// integer pointer
char c;		//character
char *p0;	//character pointer
double d;	//double
double *p1;	//double pointer
						POINTER ARITHMATIC
*/
#include<stdio.h>
void main()
{
int a,*p,b;
a=10;
p=&a;	//address of a is strod in p
printf("address of p is %p\n",p);
printf("value of p is %d\n",*p);
printf("size of integer is %d bytes\n",sizeof(int));
printf("address of p+1 is %p\n",p+1);
printf("address of p+2 is %p\n",p+2);
printf("value of p is %d\n",*(p+1));

}
