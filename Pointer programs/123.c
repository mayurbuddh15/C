#include<stdio.h>
void main()
{
int i=258,*p;
char *q;
p=&i;
printf("&i=%p p=%p\n",&i,p);	// address of both will be same
printf("&i=%p p+1=%p\n",&i,p+1);	// after increment of 4 bytes 
q=&i;
printf("&i=%p q=%p\n",&i,q);	// address of both will be same
printf("&i=%p q+1=%p\n",&i,q+1);	// after increment of 1 bytes 


}
