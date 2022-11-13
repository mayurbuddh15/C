#include<stdio.h> 
      main() 
      { 
	int a[20]; 
	int *p,*q,*r;
	r=&a[20]; 
	p=&a[0]; 
	q=&a[10]; 
	printf("%d %d\n",r-p,&r-&p); 
	printf("p=%u q=%u r=%u\n",p,q,r); 
	printf("p=%u q=%u r=%u\n",&a[0],&a[10],&a[20]); 
      }
