#include<stdio.h>
void main()
{
int a=100;
const int *ia;
ia=&a;
printf("a=%d *ia=%d",a,*ia);	// possible 

*ia=123;
printf("a=%d *ia=%d",a,*ia);




}
