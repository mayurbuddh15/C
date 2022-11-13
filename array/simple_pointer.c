#include<stdio.h>
void main()
{
int a=3;
float b=3.4,*fp=&b;
void *vp;
vp=&a;
printf("vlaue of a=%d\n",*(int *)vp);
*(int *)vp=12;
printf("vlaue of a=%d\n",*(int *)vp);
vp=fp;
printf("vlaue of b=%f\n",*(float *)vp);




}
