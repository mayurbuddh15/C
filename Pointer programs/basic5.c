#include<stdio.h>
void main()
{
int a=1025,*p;
p=&a;
printf("sizeof integer is %d bytes\n",sizeof(int));
printf("address =%p and value is %d\n",p,*p);
printf("address =%p and value is %d\n",p+1,*(p+1));
printf("/////////////////////////////////////////\n");
char *p1;
p1=(char *)p;
printf("sizeof character is %d bytes\n",sizeof(char));
printf("address =%p and value is %d\n",p1,*p1);
printf("address =%p and value is %d\n",p1+1,*(p1+1));

}
