#include<stdio.h>
void main(){
int a=100,b=200;
/*a=a^b;
b=b^a;
a=a^b;*/

a=a^b^(b=a);
printf("a=%d b=%d",a,b);




}
