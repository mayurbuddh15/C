#include<stdio.h>
void main()
{
int a[3][4]={{10,20,30,40},{50,60,70,80},{11,12,13,14}};
int (*ptr)[4];
ptr=a;
printf("%u %u %u\n",ptr,ptr+1,ptr+2);
printf("%u %u %u\n",*ptr,*ptr+1,*ptr+2);
printf("%d %d %d\n",**ptr,*(*(ptr+1)+2),*(*(ptr+2)+3));
printf("%d %d %d\n",ptr[0][0],ptr[1][2],ptr[2][3]);


}
