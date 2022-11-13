#include<stdio.h>
void main()
{
float f=23.5;
float *fp;
int *ip;
fp=&f;
ip=(int*)&f;
printf("%f\n",*fp);
printf("%d\n",*ip);

}
