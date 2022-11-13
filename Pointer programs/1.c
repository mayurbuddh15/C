#include<stdio.h>
void main()
{
int i=123,j=234,k=456;
int *p;
p=&i;
printf("p=%p &i=%p i=%d\n",p,&i,i);	//ith location and 123
*p=1000;
printf("p=%p &i=%p i=%d *p=%d\n",p,&i,i,*p);	//ith location and 1000
p=&j;
printf("p=%p &j=%p j=%d \n",p,&j,j);	//jth location 
*p=900;
printf("p=%p &j=%p j=%d *p=%d\n",p,&j,j,*p);	//jth location and value will be 900  same 
p=&k;
printf("p=%p &k=%p k=%d \n",p,&k,k);	//pointer point to kth location 
*p=000;
printf("p=%p &k=%p k=%d *p=%d",p,&k,k,*p); // value will be stored in kth loacation and it will modify

printf("i=%d j=%d k=%d *p=%d",i,j,k,*p);



}
